/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsToday/NewsToday-Structs.h>
#import <libobjc.A.dylib/NTTodayProtoitem.h>

@protocol FCHeadlineProviding;
@class NSString, SFSearchResult;

@interface NTTodayHeadlineProtoitem : NSObject <NTTodayProtoitem> {

	NSString* _identifier;
	id<FCHeadlineProviding> _headline;
	SFSearchResult* _searchResult;

}

@property (nonatomic,copy,readonly) id<FCHeadlineProviding> headline;              //@synthesize headline=_headline - In the implementation block
@property (nonatomic,copy,readonly) SFSearchResult * searchResult;                 //@synthesize searchResult=_searchResult - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
-(id<FCHeadlineProviding>)headline;
-(SFSearchResult *)searchResult;
-(id)assetHandlesWithOperationInfo:(id)arg1 forLeadingCellAppearance:(BOOL)arg2 ;
-(id)itemWithContentContext:(id)arg1 operationInfo:(id)arg2 sectionDescriptor:(id)arg3 assetFileURLsByRemoteURL:(id)arg4 forLeadingCellAppearance:(BOOL)arg5 preferredDynamicSlotAllocation:(unsigned long long)arg6 ;
-(id)initWithIdentifier:(id)arg1 headline:(id)arg2 searchResult:(id)arg3 ;
-(id)init;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
