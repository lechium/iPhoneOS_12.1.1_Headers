/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SFUSimpleOutputStream.h>

@protocol SFUOutputStream;
@class SFUMoveableFileOutputStream, SFUCryptoKey, NSData, NSMutableArray, SFUZipOutputEntry, SFUZipFreeSpaceEntry, NSString;

@interface SFUZipArchiveOutputStream : NSObject <SFUSimpleOutputStream> {

	SFUMoveableFileOutputStream* mOutputStream;
	SFUCryptoKey* mCryptoKey;
	NSData* mPassphraseHint;
	NSData* mEncryptedDocumentUuid;
	NSMutableArray* mEntries;
	SFUZipOutputEntry* mCurrentEntry;
	SFUZipOutputEntry* mLastEntryInFile;
	id<SFUOutputStream> mEntryOutputStream;
	char* mBuffer;
	NSMutableArray* mFreeList;
	SFUZipFreeSpaceEntry* mCurrentFreeSpace;
	unsigned long long mFreeBytes;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)approximateBytesForEntryHeaderWithName:(id)arg1 ;
-(id)initWithPath:(id)arg1 cryptoKey:(id)arg2 passphraseHint:(id)arg3 ;
-(id)initWithOutputStream:(id)arg1 cryptoKey:(id)arg2 passphraseHint:(id)arg3 ;
-(void)beginEntryWithName:(id)arg1 isCompressed:(BOOL)arg2 uncompressedSize:(unsigned long long)arg3 ;
-(void)writeBuffer:(const char*)arg1 size:(unsigned long long)arg2 ;
-(void)finishEntry;
-(unsigned long long)writeLocalFileHeaderForEntry:(id)arg1 ;
-(void)beginUnknownSizeEntryWithName:(id)arg1 isCompressed:(BOOL)arg2 ;
-(void)writeCentralFileHeaderUsingEntry:(id)arg1 isFirstEntry:(BOOL)arg2 ;
-(void)writeEndOfCentralDirectoryWithOffset:(long long)arg1 ;
-(void)moveToPath:(id)arg1 ;
-(id)beginUncompressedUnknownSizeEntryWithName:(id)arg1 ;
-(void)setCrc32ForCurrentEntry:(unsigned)arg1 ;
-(BOOL)canRemoveEntryWithName:(id)arg1 ;
-(void)removeEntryWithName:(id)arg1 ;
-(void)setEncryptedDocumentUuid:(id)arg1 ;
-(id)entryNames;
-(id)entriesAtPath:(id)arg1 ;
-(unsigned long long)freeBytes;
-(unsigned)crc32ForEntry:(id)arg1 ;
-(void)coalesceAndTruncateFreeSpace;
-(void)writeZip64EndOfCentralDirectoryWithOffset:(long long)arg1 ;
-(void)writeZip64EndOfCentralDirectoryLocatorWithOffset:(long long)arg1 ;
-(void)dealloc;
-(void)reset;
-(void)close;
-(id)initWithPath:(id)arg1 ;
-(void)flush;
@end

