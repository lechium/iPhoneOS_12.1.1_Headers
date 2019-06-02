/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <MediaPlayer/MPModelRequest.h>
#import <libobjc.A.dylib/MPCModelPlaybackRequesting.h>
#import <libobjc.A.dylib/MPCModelPlaybackRequestEnvironmentConsuming.h>
#import <libobjc.A.dylib/MPModelRequestDetailedKeepLocalStatusRequesting.h>
#import <libobjc.A.dylib/MPCModelRequestRTCReporting.h>
#import <libobjc.A.dylib/MPCModelStorePreviousRequestStoring.h>

@class MPSectionedCollection, MPCPlaybackRequestEnvironment, NSString, MPModelResponse, NSArray;

@interface MPCModelStorePlaybackItemsRequest : MPModelRequest <MPCModelPlaybackRequesting, MPCModelPlaybackRequestEnvironmentConsuming, MPModelRequestDetailedKeepLocalStatusRequesting, MPCModelRequestRTCReporting, MPCModelStorePreviousRequestStoring> {

	BOOL _shouldBatchResultsWithPlaceholderObjects;
	BOOL _wantsDetailedKeepLocalRequestableResponse;
	BOOL _allowLocalEquivalencies;
	MPCPlaybackRequestEnvironment* _playbackRequestEnvironment;
	MPModelResponse* _previousResponse;
	NSString* _clientIdentifier;
	MPSectionedCollection* _sectionedModelObjects;
	NSArray* _storeIDs;
	NSArray* _playbackPrioritizedIndexPaths;

}

@property (nonatomic,copy) NSArray * playbackPrioritizedIndexPaths;                                 //@synthesize playbackPrioritizedIndexPaths=_playbackPrioritizedIndexPaths - In the implementation block
@property (nonatomic,retain) MPModelResponse * previousResponse;                                    //@synthesize previousResponse=_previousResponse - In the implementation block
@property (assign,nonatomic) BOOL shouldBatchResultsWithPlaceholderObjects;                         //@synthesize shouldBatchResultsWithPlaceholderObjects=_shouldBatchResultsWithPlaceholderObjects - In the implementation block
@property (assign,nonatomic) BOOL wantsDetailedKeepLocalRequestableResponse;                        //@synthesize wantsDetailedKeepLocalRequestableResponse=_wantsDetailedKeepLocalRequestableResponse - In the implementation block
@property (assign,nonatomic) BOOL allowLocalEquivalencies;                                          //@synthesize allowLocalEquivalencies=_allowLocalEquivalencies - In the implementation block
@property (nonatomic,copy) NSString * clientIdentifier;                                             //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,copy) MPSectionedCollection * sectionedModelObjects;                           //@synthesize sectionedModelObjects=_sectionedModelObjects - In the implementation block
@property (nonatomic,copy) NSArray * storeIDs;                                                      //@synthesize storeIDs=_storeIDs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) MPSectionedCollection * playbackSourceModelObjects; 
@property (nonatomic,copy) MPCPlaybackRequestEnvironment * playbackRequestEnvironment;              //@synthesize playbackRequestEnvironment=_playbackRequestEnvironment - In the implementation block
@property (nonatomic,copy,readonly) NSString * rtcReportingPlayQueueSourceIdentifier; 
+(void)MPC_consumeSiriAssetInfo:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
+(BOOL)supportsSecureCoding;
-(NSString *)clientIdentifier;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(BOOL)allowLocalEquivalencies;
-(void)setAllowLocalEquivalencies:(BOOL)arg1 ;
-(BOOL)wantsDetailedKeepLocalRequestableResponse;
-(void)setWantsDetailedKeepLocalRequestableResponse:(BOOL)arg1 ;
-(MPModelResponse *)previousResponse;
-(void)setPreviousResponse:(MPModelResponse *)arg1 ;
-(void)setStoreIDs:(NSArray *)arg1 ;
-(NSArray *)storeIDs;
-(MPCPlaybackRequestEnvironment *)playbackRequestEnvironment;
-(void)setPlaybackRequestEnvironment:(MPCPlaybackRequestEnvironment *)arg1 ;
-(NSString *)rtcReportingPlayQueueSourceIdentifier;
-(MPSectionedCollection *)sectionedModelObjects;
-(NSArray *)playbackPrioritizedIndexPaths;
-(void)setShouldBatchResultsWithPlaceholderObjects:(BOOL)arg1 ;
-(void)setPlaybackPrioritizedIndexPaths:(NSArray *)arg1 ;
-(void)setAllowsPlaybackResponseBatching:(BOOL)arg1 ;
-(MPSectionedCollection *)playbackSourceModelObjects;
-(BOOL)shouldBatchResultsWithPlaceholderObjects;
-(void)setSectionedModelObjects:(MPSectionedCollection *)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setClientIdentifier:(NSString *)arg1 ;
@end

