# sphhjp rev2
a bit keysさんの自作キーボードsphhjp v2用ファームウェアソースコードカスタムプロジェクト  
[a bit keysさんsphhsp v2ページ](https://abitkeys.com/sphhjp/build_v2.html)
オリジナルソースは、a bit keysさんから入手したもので、自分カスタムキーマップのためのプロジェクトです  

## sphhjp ファームウェア作成
1. コード作成  
2. コンパイル  
3. ファームウェア書込み  
4. コードテスト  
[QMK test](https://config.qmk.fm/#/test/)

### TIPS.
1. レイヤー切替を左右両方に割り当てるには
    * 左右のキーボードをUSBで接続しておく  
    FLASH書き込み時は、USBを別々に接続しておく必要があるので、よく接続切替を忘れるので注意  
    * `process_record_user` に設定を記載する  

サンプルコード  
``` c
  switch (keycode) {
        case MO(FUNC):
            if (record->event.pressed) {
                layer_on(FUNC);
                // Add additional actions here if needed
            } else {
                layer_off(FUNC);
                // Add additional actions here if needed
            }
            return false;
        default:
            return true;
  }

```
