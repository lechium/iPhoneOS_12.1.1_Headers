/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_transaction;
@class NSObject;

@interface BDSOSTransaction : NSObject {

	NSObject*<OS_os_transaction> _osTransaction;

}

@property (nonatomic,retain) NSObject*<OS_os_transaction> osTransaction;              //@synthesize osTransaction=_osTransaction - In the implementation block
-(void)endTransaction;
-(void)setOsTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(NSObject*<OS_os_transaction>)osTransaction;
-(id)initWithTransactionName:(const char*)arg1 ;
-(void)dealloc;
@end
