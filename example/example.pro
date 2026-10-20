TEMPLATE = subdirs

SUBDIRS += \
    AcrylicLabelDemo \
    ButtonDemo \
    CheckBoxDemo \
    ColorDialogDemo \
    ComboBoxDemo \
    DialogDemo \
    FlowLayoutDemo \
    FolderListDialogDemo \
    InfoBarDemo \
    LineEditDemo \
    MessageDialogDemo \
    NavigationDemo \
    QFramelessWindowDemo\
    RadioButtonDemo \
    ScrollAreaDemo \
    SliderDemo \
    SpinBoxDemo \
    StateToolTipDemo \
    SwitchButtonDemo \
    TimePickerDemo \
    ToolTipDemo \
    TreeViewDemo

# 依赖 3rdparty/framelesshelper；原 submodule 仓库已失效，且当前上游与 Qt 6.11 不兼容。
# 需要时单独打开并准备可用的 framelesshelper：
#    framelesswindow \
#    gallery \
#    openglwidget
