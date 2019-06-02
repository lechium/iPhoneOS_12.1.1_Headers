/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProvider/FileProvider-Structs.h>
#import <FileProvider/FPOperation.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, FPItemManager, NSString;

@interface FPFetchThumbnailsOperation : FPOperation <NSSecureCoding> {

	NSArray* _itemIdentifiers;
	CGSize _size;
	double _scale;
	FPItemManager* _itemManager;
	NSString* _providerIdentifier;
	/*^block*/id _perThumbnailCompletionBlock;
	/*^block*/id _thumbnailsFetchCompletionBlock;
	/*^block*/id _perThumbnailCompletionBlock_v2;
	/*^block*/id _thumbnailsFetchCompletionBlock_v2;

}

@property (nonatomic,copy) id perThumbnailCompletionBlock;                    //@synthesize perThumbnailCompletionBlock=_perThumbnailCompletionBlock - In the implementation block
@property (nonatomic,copy) id thumbnailsFetchCompletionBlock;                 //@synthesize thumbnailsFetchCompletionBlock=_thumbnailsFetchCompletionBlock - In the implementation block
@property (nonatomic,copy) id perThumbnailCompletionBlock_v2;                 //@synthesize perThumbnailCompletionBlock_v2=_perThumbnailCompletionBlock_v2 - In the implementation block
@property (nonatomic,copy) id thumbnailsFetchCompletionBlock_v2;              //@synthesize thumbnailsFetchCompletionBlock_v2=_thumbnailsFetchCompletionBlock_v2 - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)operationDidProgressWithInfo:(id)arg1 error:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_initWithItemIdentifiers:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 ;
-(id)perThumbnailCompletionBlock;
-(id)perThumbnailCompletionBlock_v2;
-(id)transformData:(id)arg1 forLegacyCompletionBlockWithType:(id)arg2 ;
-(id)thumbnailsFetchCompletionBlock;
-(void)setThumbnailsFetchCompletionBlock:(id)arg1 ;
-(id)thumbnailsFetchCompletionBlock_v2;
-(void)setThumbnailsFetchCompletionBlock_v2:(id)arg1 ;
-(id)initWithItemManager:(id)arg1 providerIdentifier:(id)arg2 itemThumbnailIdentifiers:(id)arg3 size:(CGSize)arg4 scale:(double)arg5 ;
-(void)setPerThumbnailCompletionBlock:(id)arg1 ;
-(void)setPerThumbnailCompletionBlock_v2:(id)arg1 ;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)main;
@end

