/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSPFileDataStorage.h>

@class NSURL, SFUCryptoKey;

@interface TSPTemporaryDataStorage : TSPFileDataStorage {

	NSURL* _URL;
	SFUCryptoKey* _decryptionKey;
	BOOL _isMissingData;

}

@property (assign,nonatomic) BOOL isMissingData;              //@synthesize isMissingData=_isMissingData - In the implementation block
-(void)performIOChannelReadWithAccessor:(/*^block*/id)arg1 ;
-(void)performReadWithAccessor:(/*^block*/id)arg1 ;
-(id)initWithURL:(id)arg1 decryptionKey:(id)arg2 ;
-(BOOL)isMissingData;
-(void)setIsMissingData:(BOOL)arg1 ;
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
@end

