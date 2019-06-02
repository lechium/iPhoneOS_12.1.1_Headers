/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NTWritablePrivateDataStorage.h>

@protocol NTWritablePrivateDataStorage <NSObject>
@required
-(void)writeSeenHistoryItems:(id)arg1;
-(void)writeReadHistoryItem:(id)arg1;

@end


@class FCFileCoordinatedTodayDropbox, FCFileCoordinatedTodayPrivateDataTransactionQueue, NSString;

@interface NTWritablePrivateDataStorage : NSObject <NTWritablePrivateDataStorage> {

	FCFileCoordinatedTodayDropbox* _dropbox;
	FCFileCoordinatedTodayPrivateDataTransactionQueue* _transactionQueue;

}

@property (nonatomic,retain) FCFileCoordinatedTodayDropbox * dropbox;                                           //@synthesize dropbox=_dropbox - In the implementation block
@property (nonatomic,retain) FCFileCoordinatedTodayPrivateDataTransactionQueue * transactionQueue;              //@synthesize transactionQueue=_transactionQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FCFileCoordinatedTodayDropbox *)dropbox;
-(void)writeSeenHistoryItems:(id)arg1 ;
-(void)writeReadHistoryItem:(id)arg1 ;
-(id)initWithDropbox:(id)arg1 transactionQueue:(id)arg2 ;
-(void)setDropbox:(FCFileCoordinatedTodayDropbox *)arg1 ;
-(FCFileCoordinatedTodayPrivateDataTransactionQueue *)transactionQueue;
-(void)setTransactionQueue:(FCFileCoordinatedTodayPrivateDataTransactionQueue *)arg1 ;
-(id)init;
@end

