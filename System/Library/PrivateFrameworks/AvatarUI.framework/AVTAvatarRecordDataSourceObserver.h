/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVTAvatarRecordDataSourceObserver <NSObject>
@optional
-(void)significantRecordChangeInDataSource:(id)arg1;
-(void)dataSource:(id)arg1 didAddRecord:(id)arg2 atIndex:(unsigned long long)arg3;
-(void)dataSource:(id)arg1 didEditRecord:(id)arg2 atIndex:(unsigned long long)arg3;
-(void)dataSource:(id)arg1 didRemoveRecord:(id)arg2 atIndex:(unsigned long long)arg3;

@end

