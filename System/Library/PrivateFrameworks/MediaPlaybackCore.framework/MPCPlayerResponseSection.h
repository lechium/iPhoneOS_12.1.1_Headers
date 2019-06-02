/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPCPlayerResponse, MPModelGenericObject;

@interface MPCPlayerResponseSection : NSObject {

	MPCPlayerResponse* _response;
	MPModelGenericObject* _metadataObject;

}

@property (nonatomic,__weak,readonly) MPCPlayerResponse * response;                //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) MPModelGenericObject * metadataObject;              //@synthesize metadataObject=_metadataObject - In the implementation block
-(MPModelGenericObject *)metadataObject;
-(id)initWithModelGenericObject:(id)arg1 response:(id)arg2 ;
-(MPCPlayerResponse *)response;
-(id)remove;
@end

