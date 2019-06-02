/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@class UIImageView, NTKColoringLabel, NTKRichComplicationCurvedProgressView;

@interface NTKRichComplicationCircularOpenGaugeImageView : NTKRichComplicationCircularBaseView {

	UIImageView* _bottomImageView;
	NTKColoringLabel* _centerLabel;
	NTKRichComplicationCurvedProgressView* _progressView;

}
+(BOOL)handlesComplicationTemplate:(id)arg1 ;
+(BOOL)supportsComplicationFamily:(long long)arg1 ;
+(void)load;
-(void)_handleTemplate:(id)arg1 reason:(long long)arg2 ;
-(id)init;
-(void)layoutSubviews;
@end

