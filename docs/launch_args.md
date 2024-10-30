## Launch Arguments

### `config`
Specifies a config file to use (?).

### `preset`
Specifies a graphics preset for the game to use. Accepts a string representing the preset name.

### `nosteam`
Explicitly disables Steam integration.

### `noepic`
Explicitly disables Epic integration.

### `safe`
Forces the game to run in compatibility mode.

### `mode`
Specifies the window mode to use.

`windowed`, `fullscreen`, `fullscreenwindowed`.

### `driver`
Specifies the graphics driver to use.
`vulkan`, `dx11`, `dx12`.

### `resolution`
Sets the resolution of the game window. Expects a string in the format `Width x Height`.

### `statsd`
Specifies what metrics database to send metrics to.

`statsd`, `influx`, `influx_test`

### `dev`
Undocumented.

### `es_tag`
Undocumented.

### `dmm_user_id`
Sets `Digital Media Mart` user ID.

### `dmm_token`
Sets `Digital Media Mart` token.

### `replaysDir`
Sets the replays directory path.

### `connect`
Undocumented.

### `viewReplay`
Undocumented.

### `forcestart`
Undocumented.

### `start_game_as`
Undocumented.

### `restart_game_as`
Undocumented.

### `skip_pkg_validation`
Skips validating the game's packages, including reporting errors, etc.

## Engine Specific
### `quiet`
Enables silent mode. disables message boxes, etc.

### `noeh`
Disables the exception handler.

### `debug`
If this is set to true, the game will be launched with exception handling enabled.

### `no_level_file`
Undocumented.

### `rootdir`
Specifies a root directory which has the tools required by the engine (?).

### `rdp_mode`
Enables win32 rdp compatibility mode.

### `disable_breakpad`
Disables breakpad crash dumping reports.

### `copy_log_to_stdout`
Captures the log functions output to stdout.

### `attach_parent_console`
Attaches the parent console to the child process.

### `add_file_to_report`
Attaches a file to the breakpad's crash dump report.

### `das-no-stack-fill`
Prevents daScript from filling unused stack space with a specific value during compilation.

### `das-no-linter`
Skips the code analysis and style checking performed by the daScript linter.