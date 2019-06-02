/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Widgets/WGWidgetInfo.h>

@class NSDate;

@interface WGCalendarWidgetInfo : WGWidgetInfo {

	NSDate* _date;

}

@property (setter=_setDate:,nonatomic,retain) NSDate * date;              //@synthesize date=_date - In the implementation block
+(BOOL)isCalendarExtension:(id)arg1 ;
-(void)_setDate:(id)arg1 ;
-(id)_queue_iconWithFormat:(int)arg1 forWidgetWithIdentifier:(id)arg2 extension:(id)arg3 ;
-(id)_queue_iconWithOutlineForWidgetWithIdentifier:(id)arg1 extension:(id)arg2 ;
-(void)_resetIconsImpl;
-(id)initWithExtension:(id)arg1 ;
-(void)_handleSignificantTimeChange:(id)arg1 ;
-(NSDate *)date;
@end

