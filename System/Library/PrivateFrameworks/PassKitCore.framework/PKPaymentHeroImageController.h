/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:18 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKPaymentHeroImageControllerDelegate;
#import <PassKitCore/PassKitCore-Structs.h>
@class PKPaymentHeroImageManifest, NSMutableArray, NSArray;

@interface PKPaymentHeroImageController : NSObject {

	PKPaymentHeroImageManifest* _manifest;
	NSMutableArray* _currentNetworksDownloading;
	id<PKPaymentHeroImageControllerDelegate> _delegate;
	long long _watchSize;
	NSArray* _featuredNetworks;

}

@property (assign,nonatomic) id<PKPaymentHeroImageControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long watchSize;                                            //@synthesize watchSize=_watchSize - In the implementation block
@property (nonatomic,copy) NSArray * featuredNetworks;                                       //@synthesize featuredNetworks=_featuredNetworks - In the implementation block
+(id)defaultPaymentCredentials;
+(BOOL)_networkImageHasDownloadedWithError:(id)arg1 ;
+(void)_addNetworkImageDownloadError:(id)arg1 downloadedSha1:(id)arg2 ;
-(void)setFeaturedNetworks:(NSArray *)arg1 ;
-(void)_alertDelgateOfDownloadedImageData:(id)arg1 network:(id)arg2 error:(id)arg3 ;
-(void)downloadRemoteImageForNetwork:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_debugString;
-(id)_builtInNetworksCardImageData;
-(void)beginDownloadingRemoteImages;
-(long long)watchSize;
-(NSArray *)featuredNetworks;
-(id)initWithManifest:(id)arg1 featuredNetworks:(id)arg2 webService:(id)arg3 ;
-(id)initWithManifest:(id)arg1 featuredNetworks:(id)arg2 ;
-(void)beginDownloadingRemoteImagesWithCompletion:(/*^block*/id)arg1 ;
-(id)featuredNetworksImageData;
-(id)primaryFeaturedNetwork;
-(CGSize)cardArtSizeForSize:(CGSize)arg1 ;
-(void)setWatchSize:(long long)arg1 ;
-(BOOL)containsPaymentCredentialType:(long long)arg1 ;
-(void)setDelegate:(id<PKPaymentHeroImageControllerDelegate>)arg1 ;
-(id<PKPaymentHeroImageControllerDelegate>)delegate;
@end
