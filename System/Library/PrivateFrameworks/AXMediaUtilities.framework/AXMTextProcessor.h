/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AXMSpellChecker, AXMLexiconManager, AXMTagger, AXMDataDetector, AXMSpeechFormatterCache, NSDictionary, NSMutableDictionary;

@interface AXMTextProcessor : NSObject {

	AXMSpellChecker* _spellChecker;
	AXMLexiconManager* _lexiconManager;
	AXMTagger* _tagger;
	AXMDataDetector* _dataDetector;
	AXMSpeechFormatterCache* _speechFormatterCache;
	NSDictionary* _globalWhitelistedWords;
	NSMutableDictionary* _localeWhitelistedWords;

}
-(id)lexiconManager;
-(id)tagger;
-(id)_preprocessText:(id)arg1 diagnostics:(id)arg2 ;
-(id)spellChecker;
-(id)processText:(id)arg1 withOperation:(id)arg2 ;
-(id)dataDetector;
-(id)init;
@end

