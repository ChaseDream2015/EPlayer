//
//  AppDelegate.h
//  EPlayer
//
//  Created by GaoPeng on 2017/5/13.
//  Copyright © 2017年 EC. All rights reserved.
//

/* 
 Assertion failure at -[Cocoa_WindowListener processHitTest:] (/Users/epengao/Downloads/sdl_compiling/src/SDL2-2.0.5/src/video/cocoa/SDL_cocoawindow.m:802), triggered 1 time:
 'isDragAreaRunning == [_data->nswindow isMovableByWindowBackground]'
*/
#import "EPlayerAPI.h"
#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate, NSWindowDelegate, EPlayerSdkDelegate>
- (void)entryFullScreen;
- (void)mediaStopedNotify;
@end

@interface MainWindow : NSWindow
@property BOOL isFullScreen;
@property BOOL ctrViewNeedDisplay;
@property AppDelegate* appCtrl;
@property NSTimer* ctrViewWatcher;
- (void)startCtrlViewWatcher;
- (void)stopCtrlViewWatcher;
@end