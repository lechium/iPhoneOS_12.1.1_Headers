/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHImportExceptionRecorder.h>

@protocol PHImportSourceDelegate, OS_dispatch_queue;
@class NSString, NSObject, NSMutableDictionary, NSMutableSet, NSMutableArray, NSDateFormatter, PHImportDuplicateChecker, PHImportOptions, NSProgress;

@interface PHImportSource : PHImportExceptionRecorder {

	unsigned char _sourceAccessState;
	BOOL _rampBatchInterval;
	BOOL _open;
	BOOL _canShowProgress;
	BOOL _deleteContentAllowed;
	NSString* _uuid;
	unsigned long long _batchSize;
	double _batchInterval;
	id<PHImportSourceDelegate> _delegate;
	unsigned long long _currentItemIndex;
	unsigned long long _nextItemIndex;
	unsigned long long _inFlight;
	unsigned long long _completedItems;
	NSObject*<OS_dispatch_queue> _controlQueue;
	NSObject*<OS_dispatch_queue> _itemQueue;
	NSObject*<OS_dispatch_queue> _batchQueue;
	NSObject*<OS_dispatch_queue> _dupPathCollectionQueue;
	/*^block*/id _completion;
	NSMutableDictionary* _assetsByOriginalName;
	NSMutableSet* _renderedAssets;
	NSMutableArray* _duplicateAssets;
	NSObject*<OS_dispatch_queue> _processingQueue;
	NSObject*<OS_dispatch_queue> _itemProcessingQueue;
	unsigned long long _processingConcurrency;
	NSMutableArray* _removedSourceFileIdentifiers;
	NSDateFormatter* _dupeDateFormatter;
	PHImportDuplicateChecker* _duplicateChecker;
	NSMutableArray* _processed;
	double _batchStart;
	unsigned long long _batchCount;
	NSMutableArray* _items;
	NSMutableArray* _errors;
	PHImportOptions* _options;
	NSMutableArray* _assets;
	NSProgress* _progress;
	long long _assetLoadOrder;

}

@property (assign,nonatomic) unsigned long long currentItemIndex;                              //@synthesize currentItemIndex=_currentItemIndex - In the implementation block
@property (assign,nonatomic) unsigned long long nextItemIndex;                                 //@synthesize nextItemIndex=_nextItemIndex - In the implementation block
@property (assign,nonatomic) unsigned long long inFlight;                                      //@synthesize inFlight=_inFlight - In the implementation block
@property (assign,nonatomic) unsigned long long completedItems;                                //@synthesize completedItems=_completedItems - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> controlQueue;                        //@synthesize controlQueue=_controlQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> itemQueue;                           //@synthesize itemQueue=_itemQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> batchQueue;                          //@synthesize batchQueue=_batchQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dupPathCollectionQueue;              //@synthesize dupPathCollectionQueue=_dupPathCollectionQueue - In the implementation block
@property (nonatomic,copy) id completion;                                                      //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * assetsByOriginalName;                       //@synthesize assetsByOriginalName=_assetsByOriginalName - In the implementation block
@property (nonatomic,retain) NSMutableSet * renderedAssets;                                    //@synthesize renderedAssets=_renderedAssets - In the implementation block
@property (nonatomic,retain) NSMutableArray * duplicateAssets;                                 //@synthesize duplicateAssets=_duplicateAssets - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> processingQueue;                     //@synthesize processingQueue=_processingQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> itemProcessingQueue;                 //@synthesize itemProcessingQueue=_itemProcessingQueue - In the implementation block
@property (assign,nonatomic) unsigned long long processingConcurrency;                         //@synthesize processingConcurrency=_processingConcurrency - In the implementation block
@property (nonatomic,readonly) NSMutableArray * removedSourceFileIdentifiers;                  //@synthesize removedSourceFileIdentifiers=_removedSourceFileIdentifiers - In the implementation block
@property (nonatomic,retain) NSDateFormatter * dupeDateFormatter;                              //@synthesize dupeDateFormatter=_dupeDateFormatter - In the implementation block
@property (nonatomic,retain) PHImportDuplicateChecker * duplicateChecker;                      //@synthesize duplicateChecker=_duplicateChecker - In the implementation block
@property (nonatomic,retain) NSMutableArray * processed;                                       //@synthesize processed=_processed - In the implementation block
@property (assign,nonatomic) double batchStart;                                                //@synthesize batchStart=_batchStart - In the implementation block
@property (assign,nonatomic) unsigned long long batchCount;                                    //@synthesize batchCount=_batchCount - In the implementation block
@property (assign,nonatomic) BOOL rampBatchInterval;                                           //@synthesize rampBatchInterval=_rampBatchInterval - In the implementation block
@property (nonatomic,retain) NSMutableArray * items;                                           //@synthesize items=_items - In the implementation block
@property (retain) NSMutableArray * errors;                                                    //@synthesize errors=_errors - In the implementation block
@property (assign,nonatomic) BOOL open;                                                        //@synthesize open=_open - In the implementation block
@property (readonly) BOOL canShowProgress;                                                     //@synthesize canShowProgress=_canShowProgress - In the implementation block
@property (assign,nonatomic) BOOL deleteContentAllowed;                                        //@synthesize deleteContentAllowed=_deleteContentAllowed - In the implementation block
@property (nonatomic,retain) PHImportOptions * options;                                        //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) NSMutableArray * assets;                                          //@synthesize assets=_assets - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                                            //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) BOOL stalled; 
@property (assign,nonatomic) long long assetLoadOrder;                                         //@synthesize assetLoadOrder=_assetLoadOrder - In the implementation block
@property (assign,nonatomic) unsigned char sourceAccessState;                                  //@synthesize sourceAccessState=_sourceAccessState - In the implementation block
@property (assign,nonatomic,__weak) id<PHImportSourceDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * uuid;                                                //@synthesize uuid=_uuid - In the implementation block
@property (readonly) NSString * name; 
@property (readonly) NSString * productKind; 
@property (readonly) NSString * path; 
@property (readonly) BOOL isCamera; 
@property (readonly) BOOL isAppleDevice; 
@property (readonly) BOOL canEject; 
@property (readonly) BOOL isAvailable; 
@property (readonly) NSString * volumePath; 
@property (nonatomic,readonly) BOOL canDeleteContent; 
@property (assign,nonatomic) unsigned long long batchSize;                                     //@synthesize batchSize=_batchSize - In the implementation block
@property (assign,nonatomic) double batchInterval;                                             //@synthesize batchInterval=_batchInterval - In the implementation block
+(id)baseFileNameByRemovingRenderMarkerInFileName:(id)arg1 ;
-(void)setErrors:(NSMutableArray *)arg1 ;
-(NSMutableArray *)errors;
-(NSMutableArray *)processed;
-(void)setProcessed:(NSMutableArray *)arg1 ;
-(id)checkForDuplicate:(id)arg1 considerItemsInTheTrash:(BOOL)arg2 ;
-(void)checkForDuplicates:(id)arg1 considerItemsInTrash:(BOOL)arg2 forEach:(/*^block*/id)arg3 atEnd:(/*^block*/id)arg4 ;
-(id)loadAssetsForLibrary:(id)arg1 allowDuplicates:(BOOL)arg2 order:(long long)arg3 atEnd:(/*^block*/id)arg4 ;
-(PHImportDuplicateChecker *)duplicateChecker;
-(void)dispatchAssetDataRequestAsync:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(NSMutableArray *)duplicateAssets;
-(void)beginWork;
-(id)processItem:(id)arg1 applyingBlock:(/*^block*/id)arg2 ;
-(void)processAsset:(id)arg1 withProcessed:(id)arg2 atEnd:(/*^block*/id)arg3 ;
-(void)endWork;
-(NSString *)volumePath;
-(BOOL)isAppleDevice;
-(void)setSourceAccessState:(unsigned char)arg1 ;
-(BOOL)stalled;
-(void)processNextItems;
-(long long)assetLoadOrder;
-(void)setDeleteContentAllowed:(BOOL)arg1 ;
-(unsigned char)sourceAccessState;
-(void)addSourceFileIdentifiersForRemovedFiles:(id)arg1 ;
-(void)cancelAssetLoading;
-(BOOL)canEject;
-(void)eject;
-(id)loadAssetsForLibrary:(id)arg1 allowDuplicates:(BOOL)arg2 order:(long long)arg3 batchSize:(unsigned long long)arg4 batchInterval:(double)arg5 atEnd:(/*^block*/id)arg6 ;
-(void)pauseAssetLoading;
-(void)resumeAssetLoading;
-(unsigned long long)inFlight;
-(void)incrementInFlight;
-(BOOL)batchComplete;
-(void)endBatch;
-(void)decrementInFlight;
-(NSMutableArray *)removedSourceFileIdentifiers;
-(NSMutableSet *)renderedAssets;
-(BOOL)date:(id)arg1 matchesDate:(id)arg2 ;
-(BOOL)pathForAsset:(id)arg1 matchesAsset:(id)arg2 ;
-(void)addAsset:(id)arg1 toRemovedAssets:(id)arg2 ;
-(BOOL)processPotentialJpegAsset:(id)arg1 plusRawAsset:(id)arg2 ;
-(id)additionalQueues;
-(BOOL)isCamera;
-(id)requestDeleteAssetsForRecords:(id)arg1 ;
-(double)batchInterval;
-(void)setBatchInterval:(double)arg1 ;
-(unsigned long long)currentItemIndex;
-(void)setCurrentItemIndex:(unsigned long long)arg1 ;
-(unsigned long long)nextItemIndex;
-(void)setNextItemIndex:(unsigned long long)arg1 ;
-(void)setInFlight:(unsigned long long)arg1 ;
-(unsigned long long)completedItems;
-(void)setCompletedItems:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)controlQueue;
-(void)setControlQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)itemQueue;
-(void)setItemQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)batchQueue;
-(void)setBatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dupPathCollectionQueue;
-(void)setDupPathCollectionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableDictionary *)assetsByOriginalName;
-(void)setAssetsByOriginalName:(NSMutableDictionary *)arg1 ;
-(void)setRenderedAssets:(NSMutableSet *)arg1 ;
-(void)setDuplicateAssets:(NSMutableArray *)arg1 ;
-(NSObject*<OS_dispatch_queue>)itemProcessingQueue;
-(void)setItemProcessingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned long long)processingConcurrency;
-(void)setProcessingConcurrency:(unsigned long long)arg1 ;
-(NSDateFormatter *)dupeDateFormatter;
-(void)setDupeDateFormatter:(NSDateFormatter *)arg1 ;
-(void)setDuplicateChecker:(PHImportDuplicateChecker *)arg1 ;
-(double)batchStart;
-(void)setBatchStart:(double)arg1 ;
-(unsigned long long)batchCount;
-(void)setBatchCount:(unsigned long long)arg1 ;
-(BOOL)rampBatchInterval;
-(void)setRampBatchInterval:(BOOL)arg1 ;
-(BOOL)canShowProgress;
-(BOOL)deleteContentAllowed;
-(void)setAssetLoadOrder:(long long)arg1 ;
-(BOOL)canDeleteContent;
-(void)removeAssets:(id)arg1 ;
-(void)setAssets:(NSMutableArray *)arg1 ;
-(NSMutableArray *)assets;
-(unsigned long long)batchSize;
-(void)setBatchSize:(unsigned long long)arg1 ;
-(NSString *)productKind;
-(id)generatePPTData;
-(id)loadAssetsForLibrary:(id)arg1 allowDuplicates:(BOOL)arg2 order:(long long)arg3 batchInterval:(double)arg4 atEnd:(/*^block*/id)arg5 ;
-(id)loadAssetsForLibrary:(id)arg1 allowDuplicates:(BOOL)arg2 order:(long long)arg3 batchSize:(unsigned long long)arg4 atEnd:(/*^block*/id)arg5 ;
-(id)deleteImportAssets:(id)arg1 isConfirmed:(BOOL)arg2 isCancelable:(BOOL)arg3 atEnd:(/*^block*/id)arg4 ;
-(NSObject*<OS_dispatch_queue>)processingQueue;
-(void)setProcessingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)isAvailable;
-(void)setOpen:(BOOL)arg1 ;
-(id)init;
-(NSString *)name;
-(NSString *)uuid;
-(void)setDelegate:(id<PHImportSourceDelegate>)arg1 ;
-(id<PHImportSourceDelegate>)delegate;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(void)setProgress:(NSProgress *)arg1 ;
-(PHImportOptions *)options;
-(NSMutableArray *)items;
-(void)setItems:(NSMutableArray *)arg1 ;
-(NSProgress *)progress;
-(NSString *)path;
-(BOOL)open;
-(void)setOptions:(PHImportOptions *)arg1 ;
-(void)addItems:(id)arg1 ;
@end

