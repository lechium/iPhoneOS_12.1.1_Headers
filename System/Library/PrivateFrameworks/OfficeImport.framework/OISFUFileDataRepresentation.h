/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OISFUDataRepresentation.h>

@protocol SFUInputStream;
@class NSString, OISFUCryptoKey;

@interface OISFUFileDataRepresentation : OISFUDataRepresentation {

	NSString* mPath;
	int mSharedFd;
	long long mFileLength;
	unsigned mFileType;
	BOOL mHasFileAttributes;
	long long mPlaintextDataLength;
	OISFUCryptoKey* mCryptoKey;
	id<SFUInputStream> mInputStream;
	BOOL mDeleteFileWhenDone;

}
-(BOOL)isReadable;
-(long long)encodedLength;
-(id)inputStream;
-(long long)dataLength;
-(BOOL)hasSameLocationAs:(id)arg1 ;
-(BOOL)isEncrypted;
-(id)initWithPath:(id)arg1 sharedFileDescriptor:(int)arg2 cryptoKey:(id)arg3 dataLength:(long long)arg4 ;
-(id)initWithCopyOfData:(id)arg1 path:(id)arg2 cryptoKey:(id)arg3 ;
-(BOOL)isCryptoKeyIdenticalToKey:(id)arg1 ;
-(id)initWithPath:(id)arg1 cryptoKey:(id)arg2 dataLength:(long long)arg3 ;
-(void)readFileAttributes;
-(id)initWithInputStream:(id)arg1 cryptoKey:(id)arg2 dataLength:(long long)arg3 ;
-(void)deleteFileWhenDone;
-(id)initWithCopyOfData:(id)arg1 path:(id)arg2 ;
-(id)initWithPath:(id)arg1 sharedFileDescriptor:(int)arg2 ;
-(void)dealloc;
-(id)description;
-(id)path;
-(unsigned)fileType;
-(void)setFileType:(unsigned)arg1 ;
-(id)initWithPath:(id)arg1 ;
@end

