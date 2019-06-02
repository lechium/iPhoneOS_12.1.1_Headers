/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SFUInputStream.h>

@protocol SFUInputStream;
@class OISFUCryptor, NSString;

@interface OISFUCryptoInputStream : NSObject <SFUInputStream> {

	id<SFUInputStream> mBaseStream;
	OISFUCryptor* mCryptor;
	long long mOffset;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)canSeek;
-(unsigned long long)readToBuffer:(char*)arg1 size:(unsigned long long)arg2 ;
-(void)seekToOffset:(long long)arg1 ;
-(void)disableSystemCaching;
-(void)enableSystemCaching;
-(id)closeLocalStream;
-(id)initForDecryptionWithInputStream:(id)arg1 key:(id)arg2 ;
-(void)dealloc;
-(long long)offset;
-(void)close;
@end

