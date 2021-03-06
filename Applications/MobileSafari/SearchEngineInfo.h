//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WBSSearchProvider.h"

@class NSString;

@interface SearchEngineInfo : WBSSearchProvider
{
    int _searchID;	// 8 = 0x8
    NSString *_scriptName;	// 16 = 0x10
    NSString *_shortName;	// 24 = 0x18
}

+ (int)_resultTypeForShortName:(id)arg1;	// IMP=0x00000001000ae764
+ (unsigned long long)_endpointTypeForShortName:(id)arg1;	// IMP=0x00000001000ae408
+ (id)engineFromDictionary:(id)arg1 withController:(id)arg2;	// IMP=0x00000001000adc18
@property(readonly, nonatomic) NSString *shortName; // @synthesize shortName=_shortName;
@property(readonly, nonatomic) NSString *scriptName; // @synthesize scriptName=_scriptName;
@property(readonly, nonatomic) int searchID; // @synthesize searchID=_searchID;
- (void).cxx_destruct;	// IMP=0x00000001000aecf8
@property(readonly, nonatomic) NSString *displayName;
- (id)description;	// IMP=0x00000001000aeac0
@property(readonly, nonatomic) int resultType;
@property(readonly, nonatomic) unsigned long long endpointType;
- (_Bool)searchShouldUseSafeSearchTemplate;	// IMP=0x00000001000ae35c
- (Class)classForCoder;	// IMP=0x00000001000adc04
- (id)initWithName:(id)arg1 scriptName:(id)arg2 searchID:(int)arg3 searchTemplate:(id)arg4 hostSuffixes:(id)arg5 pathPrefixes:(id)arg6 usesSearchTermsFromFragment:(_Bool)arg7 suggestionsTemplate:(id)arg8 topLevelDomains:(id)arg9 safeSearchSuffix:(id)arg10 safeSearchURLQueryParameters:(id)arg11 carrierInfo:(id)arg12 controller:(id)arg13;	// IMP=0x00000001000ad6b0

@end

