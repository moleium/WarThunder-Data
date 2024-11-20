void __fastcall mpl::on_connection_accepted(_QWORD *a1, __int16 a2)
{
  v51 = 0xFFFFFFFFFFFFFFFFuLL;
  strncpy(plr_name, "redacted", 0x41uLL);
  plr_name[0x40] = 0;
  v4 = lpCriticalSection;
  if ( lpCriticalSection )
    EnterCriticalSection(lpCriticalSection);
  v5 = qword_4A79308;
  if ( qword_4A79308 != 0xFFFFFFFFFFFFFFFFuLL )
    v51 = qword_4A79308;
  if ( v4 )
    LeaveCriticalSection(v4);
  if ( v5 == 0xFFFFFFFFFFFFFFFFuLL )
  {
    v16 = "..\\..\\skyquake\\prog\\net\\multiplayerPeer.cpp";
    v17 = 0x400000000003LL;
    while ( 1 )
    {
      v18 = *v16 - 0x2E;
      if ( v18 > 0x2E || !_bittest64(&v17, v18) )
        break;
      ++v16;
    }
    v42 = v16;
    LODWORD(input) = 1;
    v44 = 0xAELL;
    LODWORD(v43) = 2;
    logmessage_fmt(3u, "cp: %s,%d", &input, 2);
    mpl::set_connection_failed(a1, 0xFFFFFFFF);
    return;
  }
  *(v50 + 0xD) = qword_4B447C1;
  v50[0] = unk_4B447B4;
  v6 = a1[0x45];
  if ( v6 )
  {
    EnterCriticalSection((v6 + 8));
    v7 = 3LL * a2;
    *(v6 + 8 * v7 + 0x64) = 2;
    *(v6 + 8 * v7 + 0x6C) = v50[0];
    LeaveCriticalSection((v6 + 8));
    v8 = a1[0x45];
    v9 = *(a1[0x42] + 0x58LL);
    v10 = 0;
    if ( *(v9 + 0x38) > a2 )
    {
      v11 = *(v9 + 0x30);
      if ( v11 )
        v10 = *(v11 + 0x238LL * a2 + 0x1C);
    }
    EnterCriticalSection((v8 + 8));
    *(v8 + 0x18LL * a2 + 0x68) = v10;
    LeaveCriticalSection((v8 + 8));
  }
  v40 = 0;
  sub_29D8100(&input);
  vac_loaded = vac::init(&input, 0LL);
  input_ = input;
  if ( input )
    (*(*v42 + 0x40LL))(v42);
  if ( vac_loaded != 1 )
  {
    if ( !vac_loaded )
    {
      v40 = 1;
      logmessage_fmt(0x504C554Du, "[AC]: Inited client", 0LL, 0);
      goto LABEL_31;
    }
    input = 0LL;
    v43 = 0LL;
    v19 = vac_loaded;
    v46 = vac_loaded;
    LODWORD(bitstream) = 2;
    v42 = strmem;
    sub_1546EF0(&input, input_, "%d", &bitstream, 1);
    v20 = input;
    if ( byte_4B841C8 == 1 )
    {
      v21 = &szFile;
      if ( v43 )
        v21 = input;
      bitstream = "result";
      v46 = v21;
      v49[0] = &bitstream;
      v49[1] = 1LL;
      statsd::counter("ac.init", v49);
      if ( !v20 )
        goto LABEL_30;
    }
    else
    {
      statsd::counter_x("ac.init", 1LL);
      if ( !v20 )
      {
LABEL_30:
        v42 = v19;
        LODWORD(input) = 2;
        logmessage_fmt(1u, "[AC] Failed to init with error %d!", &input, 1);
        goto LABEL_31;
      }
    }
    (*(*v42 + 0x40LL))(v42, v20);
    goto LABEL_30;
  }
LABEL_31:
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( !*(ThreadLocalStoragePointer[TlsIndex] + 1LL) )
    _dyn_tls_on_demand_init(ThreadLocalStoragePointer, input_, v13, v14);
  v23 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160LL);
  LODWORD(bitstream) = 0x80000000;
  LODWORD(v46) = 0;
  v48 = v23;
  v24 = (*(*v23 + 0x18LL))(v23, 0x80LL);
  v47 = v24;
  HIDWORD(bitstream) = 0x400;
  *(v24 + 7) = 0LL;
  *(v24 + 6) = 0LL;
  *(v24 + 5) = 0LL;
  *(v24 + 4) = 0LL;
  *(v24 + 3) = 0LL;
  *(v24 + 2) = 0LL;
  *(v24 + 1) = 0LL;
  *v24 = 0LL;
  LOBYTE(input) = 0x5F;
  danet::write_bits(&bitstream, &input, 8u);
  danet::write_bits(&bitstream, &v51, 0x248u);
  danet::write_bits(&bitstream, v50, 0x100u);
  LOBYTE(input) = 2;
  danet::write_bits(&bitstream, &input, 8u);
  danet::write_bits(&bitstream, &v40, 0x10u);
  bitstream_data = a1[0x42];
  input = v47;
  v42 = (((bitstream & 0x7FFFFFFF) + 7) >> 3);
  LOBYTE(v26) = 2;
  LOBYTE(v27) = 2;
  if ( danet::peer_send(bitstream_data, &input, v26, v27, 0, a2, 0, 0) )
  {
    a1[0x13] = 0LL;

    // getSystemAddressByIndex
    v28 = (bitstream & 0x7FFFFFFF) + 7LL;
    v29 = a1[0x42];
    if ( v29 && (v30 = *(v29 + 0x58), *(v30 + 0x38) > a2) && (v31 = *(v30 + 0x30)) != 0 )
    {
      ipv4_address = (v31 + 0x238LL * a2 + 0x24);
    }
    else
    {
      ipv4_address = &qword_4B50450;
      if ( dword_4B50458 > *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 4LL) )
      {
        Init_thread_header(&dword_4B50458);
        if ( dword_4B50458 == 0xFFFFFFFF )
        {
          qword_4B50450 = 0LL;
          Init_thread_footer(&dword_4B50458);
        }
      }
    }

    // toString
    v36 = v28 >> 3;
    if ( ipv4_address->S_un.S_addr == 0xFFFFFFFF && ipv4_address[1].S_un.S_un_w.s_w1 == 0xFFFF )
    {
      v37 = &szFile;
    }
    else
    {

      // converts an (Ipv4) Internet network address into an ASCII string in Internet standard dotted-decimal format.
      inet_ntoa(*ipv4_address);
      LODWORD(v39) = ipv4_address[1].S_un.S_un_w.s_w1;
      v38 = *(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
      v37 = (v38 + 0x780);
      vsprintf((v38 + 0x780), word_18, "%s:%d");
      *(v38 + 0x797) = 0;
    }
    v42 = v37;
    LODWORD(input) = 1;
    v44 = v36;
    LODWORD(v43) = 2;
    logmessage_fmt(
      0x504C554Du,
      "ID_CONNECTION_REQUEST_ACCEPTED : connected to '%s' send MESSAGE_REQUEST_TO_MESSAGE_ID to it (%u bytes)",
      &input,
      2,
      v39);
    if ( bitstream < 0 )
      goto LABEL_50;
  }
  else
  {
    v33 = "..\\..\\skyquake\\prog\\net\\multiplayerPeer.cpp";
    v34 = 0x400000000003LL;
    while ( 1 )
    {
      v35 = *v33 - 0x2E;
      if ( v35 > 0x2E || !_bittest64(&v34, v35) )
        break;
      ++v33;
    }
    v42 = v33;
    LODWORD(input) = 1;
    v44 = 0xE2LL;
    LODWORD(v43) = 2;
    logmessage_fmt(3u, "cp: %s,%d", &input, 2);

    // Sets unit to delayed state & Ends the mission
    mpl::set_connection_failed(a1, 0xFFFFFFFF);
    if ( bitstream < 0 )
LABEL_50:
      (*(*v48 + 0x40LL))(v48, v47);
  }
}