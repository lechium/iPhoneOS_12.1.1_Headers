/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPModelRequest, MPPropertySet, MPSectionedCollection;

@interface MPModelResponse : NSObject {

	BOOL _valid;
	MPModelRequest* _request;
	MPPropertySet* _deferredSectionProperties;
	MPPropertySet* _deferredItemProperties;
	MPSectionedCollection* _results;

}

@property (nonatomic,retain) MPPropertySet * deferredSectionProperties;              //@synthesize deferredSectionProperties=_deferredSectionProperties - In the implementation block
@property (nonatomic,retain) MPPropertySet * deferredItemProperties;                 //@synthesize deferredItemProperties=_deferredItemProperties - In the implementation block
@property (nonatomic,copy) MPSectionedCollection * results;                          //@synthesize results=_results - In the implementation block
@property (nonatomic,copy,readonly) MPModelRequest * request;                        //@synthesize request=_request - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid;                            //@synthesize valid=_valid - In the implementation block
-(void)getChangeDetailsFromPreviousResponse:(id)arg1 completion:(/*^block*/id)arg2 ;
-(MPPropertySet *)deferredSectionProperties;
-(void)setDeferredSectionProperties:(MPPropertySet *)arg1 ;
-(MPPropertySet *)deferredItemProperties;
-(void)setDeferredItemProperties:(MPPropertySet *)arg1 ;
-(id)init;
-(id)description;
-(id)debugDescription;
-(void)_invalidate;
-(MPModelRequest *)request;
-(id)initWithRequest:(id)arg1 ;
-(BOOL)isValid;
-(MPSectionedCollection *)results;
-(void)setResults:(MPSectionedCollection *)arg1 ;
@end

