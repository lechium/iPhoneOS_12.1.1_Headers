/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLPreheatItemSource.h>

@protocol OS_dispatch_queue;
@class NSMutableIndexSet, NSObject, PLImageTable, NSString;

@interface PLImageTablePreheater : NSObject <PLPreheatItemSource> {

	NSMutableIndexSet* _indexesForPreheating;
	NSObject*<OS_dispatch_queue> _indexIsolationQueue;
	NSObject*<OS_dispatch_queue> _preheatQueue;
	PLImageTable* _imageTable;

}

@property (nonatomic,retain) PLImageTable * imageTable;              //@synthesize imageTable=_imageTable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithImageTable:(id)arg1 ;
-(id)preheatItemForAsset:(id)arg1 format:(int)arg2 optimalSourcePixelSize:(CGSize)arg3 options:(unsigned)arg4 ;
-(id)originalPreheatItemForAsset:(id)arg1 optimalSourcePixelSize:(CGSize)arg2 options:(unsigned)arg3 ;
-(void)preheatImageDataAtIndexes:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_flushAndReturnIndexesForPreheating;
-(void)_preheatEntriesAtIndexes:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_preheatEntryAtIndex:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(PLImageTable *)imageTable;
-(void)setImageTable:(PLImageTable *)arg1 ;
-(void)dealloc;
@end

