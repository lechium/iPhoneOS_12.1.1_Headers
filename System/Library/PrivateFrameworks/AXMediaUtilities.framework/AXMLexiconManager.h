/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
@class NSMutableDictionary;

@interface AXMLexiconManager : NSObject {

	NSMutableDictionary* _cachedLexicons;

}
-(LXLexiconRef)_lexiconForLocale:(id)arg1 diagnostics:(id)arg2 ;
-(BOOL)lexiconExistsForLocale:(id)arg1 diagnostics:(id)arg2 ;
-(BOOL)textExistsInLexicon:(id)arg1 withLocale:(id)arg2 diagnostics:(id)arg3 ;
-(void*)_opaqueLexiconForLocale:(id)arg1 diagnostics:(id)arg2 ;
-(id)init;
@end

