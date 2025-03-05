# nice-adventure_time

Fork of https://github.com/M165437/nice-view-gem that adds Adventure Time images

https://www.pixilart.com

## Quick setup

In your ZMK firmware, add the following:

Add remote to `west.yaml`
```yaml
manifest:
  remotes:
    - name: zmkfirmware
      url-base: https://github.com/zmkfirmware
    - name: whoop-t
      url-base: https://github.com/whoop-t
  projects:
    - name: zmk
      remote: zmkfirmware
      revision: main
      import: app/west.yml
    - name: nice-adventure-time
      remote: whoop-t
      revision: main
  self:
    path: config
```

Add this module to `build.yaml`(this is for corne, but change for your keyboard)
```yaml
include:
  - board: nice_nano_v2
    shield: corne_left nice_view_adapter nice_adventure_time
  - board: nice_nano_v2
    shield: corne_right nice_view_adapter nice_adventure_time
```
