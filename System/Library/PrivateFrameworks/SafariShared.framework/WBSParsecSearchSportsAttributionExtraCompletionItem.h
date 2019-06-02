/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSParsecModel.h>
#import <libobjc.A.dylib/WBSCompletionListItem.h>

@class SFSearchResult, NSString, NSURL, WBSParsecImageRepresentation, WBSQuerySuggestion;

@interface WBSParsecSearchSportsAttributionExtraCompletionItem : WBSParsecModel <WBSCompletionListItem> {

	SFSearchResult* sfSearchResultValue;
	NSString* _label;
	NSURL* _url;
	WBSParsecImageRepresentation* _imageRepresentation;

}

@property (nonatomic,copy,readonly) NSString * label;                                           //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                                     //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) WBSParsecImageRepresentation * imageRepresentation;              //@synthesize imageRepresentation=_imageRepresentation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * parsecDomainIdentifier; 
@property (nonatomic,readonly) SFSearchResult * sfSearchResultValue; 
@property (nonatomic,readonly) unsigned long long engagementDestination; 
@property (nonatomic,readonly) NSString * lastSearchQuery; 
@property (nonatomic,retain) WBSQuerySuggestion * siriSuggestion; 
+(id)schema;
-(NSString *)parsecDomainIdentifier;
-(SFSearchResult *)sfSearchResultValue;
-(unsigned long long)engagementDestination;
-(WBSParsecImageRepresentation *)imageRepresentation;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)label;
-(NSURL *)url;
@end

