/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _KSTextReplacementStoreProtocol <NSObject>
@required
-(void)removeAllEntries;
-(void)addEntries:(id)arg1 removeEntries:(id)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(void)queryTextReplacementsWithPredicate:(id)arg1 callback:(/*^block*/id)arg2;
-(void)requestSyncWithCompletionBlock:(/*^block*/id)arg1;
-(id)textReplacementEntries;
-(void)queryTextReplacementsWithCallback:(/*^block*/id)arg1;

@end

