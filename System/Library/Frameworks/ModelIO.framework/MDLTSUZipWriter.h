/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:18 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, MDLTSURandomWriteChannel, OS_dispatch_semaphore, OS_dispatch_data;
@class NSObject, NSMutableArray, NSArray, NSMutableDictionary, MDLTSUZipWriterEntry, NSDate, NSError;

@interface MDLTSUZipWriter : NSObject {

	unsigned long long _options;
	NSObject*<OS_dispatch_queue> _channelQueue;
	id<MDLTSURandomWriteChannel> _writeChannel;
	NSObject*<OS_dispatch_semaphore> _writeChannelCompletionSemaphore;
	NSMutableArray* _entries;
	NSArray* _sortedEntries;
	NSMutableDictionary* _entriesMap;
	MDLTSUZipWriterEntry* _currentEntry;
	BOOL _isClosed;
	BOOL _calculateSize;
	BOOL _force32BitSize;
	BOOL _calculateCRC;
	unsigned long long _sizeToMatch;
	unsigned _CRCToMatch;
	NSDate* _lastModificationDateIfSizeAndCRCMatches;
	NSDate* _newEntryLastModificationDate;
	long long _currentOffset;
	NSObject*<OS_dispatch_data> _localFileHeaderData;
	NSMutableArray* _entryDatas;
	unsigned long long _entryDataSize;
	NSObject*<OS_dispatch_queue> _writeQueue;
	long long _writtenOffset;
	NSError* _error;

}

@property (readonly) unsigned long long archiveLength; 
@property (readonly) unsigned long long entriesCount; 
@property (readonly) NSArray * sortedEntries; 
@property (readonly) BOOL isClosed; 
-(BOOL)isClosed;
-(unsigned long long)entriesCount;
-(void)writeData:(id)arg1 ;
-(void)addExistingEntry:(id)arg1 ;
-(void)setEntryInsertionOffset:(long long)arg1 ;
-(void)truncateToOffsetImpl:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)entriesCountImpl;
-(id)p_writeChannel;
-(void)addExistingEntryImpl:(id)arg1 ;
-(void)setEntryInsertionOffsetImpl:(long long)arg1 ;
-(id)sortedEntriesImpl;
-(void)truncateToNumberOfEntriesImpl:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)flushCurrentEntryWithQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSArray *)sortedEntries;
-(void)truncateToNumberOfEntries:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)truncateToOffset:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)enumerateEntriesUsingBlock:(/*^block*/id)arg1 ;
-(void)addData:(id)arg1 ;
-(id)entryWithName:(id)arg1 ;
-(void)finishEntry;
-(void)writeZip64EndOfCentralDirectoryLocatorWithOffset:(long long)arg1 ;
-(void)addBarrier:(/*^block*/id)arg1 ;
-(void)beginEntryWithNameImpl:(id)arg1 force32BitSize:(BOOL)arg2 lastModificationDate:(id)arg3 size:(unsigned long long)arg4 CRC:(unsigned)arg5 forceCalculatingSizeAndCRCForPreservingLastModificationDate:(BOOL)arg6 ;
-(id)localFileHeaderDataForEntry:(id)arg1 ;
-(void)addData:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)addDataImpl:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)flushEntryData;
-(void)writeData:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)handleWriteError:(id)arg1 ;
-(void)writeData:(id)arg1 offset:(long long)arg2 ;
-(void)writeEntryWithName:(id)arg1 force32BitSize:(BOOL)arg2 lastModificationDate:(id)arg3 size:(unsigned long long)arg4 CRC:(unsigned)arg5 fromReadChannel:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)writeCentralDirectory;
-(void)writeCentralFileHeaderDataForEntry:(id)arg1 ;
-(void)writeEndOfCentralDirectoryDataWithOffset:(long long)arg1 size:(long long)arg2 entryCount:(unsigned long long)arg3 ;
-(void)writeZip64EndOfCentralDirectoryWithOffset:(long long)arg1 size:(long long)arg2 entryCount:(unsigned long long)arg3 ;
-(void)p_writeData:(id)arg1 offset:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)beginEntryWithName:(id)arg1 force32BitSize:(BOOL)arg2 lastModificationDate:(id)arg3 size:(unsigned long long)arg4 CRC:(unsigned)arg5 forceCalculatingSizeAndCRCForPreservingLastModificationDate:(BOOL)arg6 ;
-(void)writeEntryWithName:(id)arg1 force32BitSize:(BOOL)arg2 fromReadChannel:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)writeEntryWithName:(id)arg1 force32BitSize:(BOOL)arg2 lastModificationDate:(id)arg3 size:(unsigned long long)arg4 CRC:(unsigned)arg5 fromReadChannel:(id)arg6 writeHandler:(/*^block*/id)arg7 ;
-(void)closeWithQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)prepareWriteChannelWithCloseCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned long long)archiveLength;
-(id)init;
-(id)initWithOptions:(unsigned long long)arg1 ;
@end

