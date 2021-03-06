/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol CKPickerBarView <NSObject>
@property (nonatomic,copy) NSArray * acknowledgmentViews; 
@required
-(id)initWithGroupCounts:(id)arg1 selectedType:(long long)arg2 orientation:(char)arg3;
-(NSArray *)acknowledgmentViews;
-(void)performShowAnimation:(/*^block*/id)arg1;
-(void)performSendAnimation:(/*^block*/id)arg1;
-(void)performCancelAnimation:(/*^block*/id)arg1;
-(void)performSelectedAnimation:(/*^block*/id)arg1;
-(void)setAcknowledgmentViews:(id)arg1;

@end

