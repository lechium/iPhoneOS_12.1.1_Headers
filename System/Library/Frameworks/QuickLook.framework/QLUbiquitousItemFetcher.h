/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QLItemFetcher.h>

@class FPSandboxingURLWrapper, NSFileCoordinator, NSMutableArray, NSNumber, QLURLHandler, NSURL;

@interface QLUbiquitousItemFetcher : QLItemFetcher {

	FPSandboxingURLWrapper* _sandboxingWrapper;
	NSFileCoordinator* _fileCoordinator;
	NSMutableArray* _updateBlocks;
	id _progressSubscriber;
	NSNumber* _sizeTotalUnitCount;
	QLURLHandler* _zipPackageUrlHandler;
	BOOL _shouldZipPackageIfNeeded;
	BOOL _isAccessingURL;

}

@property (nonatomic,readonly) NSURL * fileURL; 
+(BOOL)supportsSecureCoding;
-(id)shareableItem;
-(void)fetchContentWithAllowedOutputClasses:(id)arg1 inQueue:(id)arg2 updateBlock:(/*^block*/id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(BOOL)isLongFetchOperation;
-(id)fetchedContent;
-(id)newItemProvider;
-(id)initWithZippingPackageIfNeeded:(BOOL)arg1 ;
-(void)_removeUpdateBlockIfNeeded:(/*^block*/id)arg1 ;
-(id)_createURLForPackageIfNeeded;
-(void)subscribeToPreviewItemProgress;
-(void)_deleteTempraryZipPackageFileIfNeeded;
-(id)initWithSandboxingURLWrapper:(id)arg1 shouldZipPackageIfNeeded:(BOOL)arg2 ;
-(id)initWithURL:(id)arg1 shouldZipPackageIfNeeded:(BOOL)arg2 ;
-(BOOL)canBeCanceled;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)itemSize;
-(NSURL *)fileURL;
-(void)cancelFetch;
@end

