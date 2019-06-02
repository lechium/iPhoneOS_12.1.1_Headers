/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet;

@interface CPLScopeFilter : NSObject {

	NSSet* _includedScopeIdentifiers;
	NSSet* _excludedScopeIdentifiers;

}

@property (nonatomic,readonly) NSSet * includedScopeIdentifiers;              //@synthesize includedScopeIdentifiers=_includedScopeIdentifiers - In the implementation block
@property (nonatomic,readonly) NSSet * excludedScopeIdentifiers;              //@synthesize excludedScopeIdentifiers=_excludedScopeIdentifiers - In the implementation block
-(BOOL)filterOnScopeIdentifier:(id)arg1 ;
-(id)_setOfScopeIdentifiersFromEnumeration:(id)arg1 ;
-(id)initWithIncludedScopeIdentifiers:(id)arg1 ;
-(id)initWithExcludedScopeIdentifiers:(id)arg1 ;
-(NSSet *)includedScopeIdentifiers;
-(NSSet *)excludedScopeIdentifiers;
-(id)description;
@end
