/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet;

@interface CNVCardFilteredPersonScope : NSObject {

	NSSet* _blacklist;
	unsigned long long _filterOptions;

}

@property (readonly) NSSet * blacklist;                             //@synthesize blacklist=_blacklist - In the implementation block
@property (readonly) unsigned long long filterOptions;              //@synthesize filterOptions=_filterOptions - In the implementation block
-(id)initWithBlacklist:(id)arg1 options:(unsigned long long)arg2 ;
-(NSSet *)blacklist;
-(unsigned long long)filterOptions;
-(BOOL)isEmpty;
@end

