/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSParsecLegacySearchResult.h>

@class NSMutableArray, NSString;

@interface WBSParsecSearchMoviesResult : WBSParsecLegacySearchResult {

	NSMutableArray* _posterRepresentations;
	NSString* _descriptionLeadInText;

}

@property (nonatomic,readonly) NSString * descriptionLeadInText;              //@synthesize descriptionLeadInText=_descriptionLeadInText - In the implementation block
-(NSString *)descriptionLeadInText;
-(id)postersWithSession:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
@end

