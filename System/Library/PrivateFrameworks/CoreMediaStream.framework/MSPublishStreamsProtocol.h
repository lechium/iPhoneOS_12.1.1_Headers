/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMediaStream/CoreMediaStream-Structs.h>
#import <CoreMediaStream/MSStreamsProtocol.h>

@class NSArray;

@interface MSPublishStreamsProtocol : MSStreamsProtocol {

	MSPSPCContext* _context;
	NSArray* _assetCollectionsInFlight;
	MSPSPCUCContext* _UCContext;

}
-(id)initWithPersonID:(id)arg1 baseURL:(id)arg2 ;
-(void)sendMetadataForAssetCollections:(id)arg1 ;
-(void)sendUploadCompleteForAssetCollections:(id)arg1 ;
-(id)_missingAssetFieldErrorWithFieldName:(id)arg1 ;
-(id)_metadataDictForAsset:(id)arg1 outError:(id*)arg2 ;
-(id)_metadataDictForAssetCollection:(id)arg1 outError:(id*)arg2 ;
-(void)_resetConnectionVariables;
-(BOOL)_insertInfoAboutAsset:(id)arg1 intoDictionary:(id)arg2 outError:(id*)arg3 ;
-(void)_coreProtocolDidFinishResponse:(id)arg1 error:(id)arg2 ;
-(void)_coreProtocolDidFailAuthenticationError:(id)arg1 ;
-(void)_coreProtocolDidFinishUCResults:(id)arg1 error:(id)arg2 ;
-(void)abort;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
@end

