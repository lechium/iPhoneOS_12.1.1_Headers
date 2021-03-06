/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:06 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate;


@protocol PKDatePickerInternalImplementationProtocol <NSObject>
@property (nonatomic,retain) NSDate * date; 
@required
-(void)prepareToDie;
-(id)initShowingDay:(BOOL)arg1 month:(BOOL)arg2 year:(BOOL)arg3 useDarkAppearance:(BOOL)arg4;
-(void)setDateValueChangedTarget:(id)arg1 action:(SEL)arg2;
-(NSDate *)date;
-(void)setDate:(id)arg1;

@end

