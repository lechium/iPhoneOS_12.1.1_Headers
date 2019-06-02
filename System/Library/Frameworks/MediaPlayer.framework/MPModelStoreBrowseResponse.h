/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:37 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPModelResponse.h>

@class MPChangeDetails, MPModelStoreBrowseResponseParser;

@interface MPModelStoreBrowseResponse : MPModelResponse {

	MPChangeDetails* _changeDetails;
	MPModelStoreBrowseResponseParser* _parser;

}

@property (nonatomic,retain) MPModelStoreBrowseResponseParser * parser;              //@synthesize parser=_parser - In the implementation block
@property (nonatomic,retain) MPChangeDetails * changeDetails;                        //@synthesize changeDetails=_changeDetails - In the implementation block
@property (nonatomic,readonly) BOOL hasAdditionalContentItems; 
-(BOOL)hasAdditionalContentItems;
-(MPModelStoreBrowseResponseParser *)parser;
-(void)setParser:(MPModelStoreBrowseResponseParser *)arg1 ;
-(void)setChangeDetails:(MPChangeDetails *)arg1 ;
-(MPChangeDetails *)changeDetails;
@end

