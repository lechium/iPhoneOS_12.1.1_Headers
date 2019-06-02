/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HearingUI.framework/HearingUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HACCContentModuleDelegate <NSObject>
@required
-(id)currentHearingDevice;
-(void)controlDidActivate:(id)arg1;
-(void)content:(id)arg1 shouldPreview:(BOOL)arg2 withController:(id)arg3 andCompletion:(/*^block*/id)arg4;
-(double)preferredContentWidth;
-(BOOL)shouldDrawBackground;

@end

