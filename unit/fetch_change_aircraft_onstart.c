bool fetch_change_aircraft_onstart()
{
  return **(game + 0x108) == 6;
}
