/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIScreen;

@interface SSScreenSnapshotter : NSObject {

	UIScreen* _screen;

}

@property (nonatomic,readonly) UIScreen * screen;              //@synthesize screen=_screen - In the implementation block
+(id)snapshotterForScreen:(id)arg1 ;
-(id)takeScreenshot;
-(UIScreen *)screen;
-(id)initWithScreen:(id)arg1 ;
@end

