/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _LXCursor* LXCursorRef;

typedef struct _LXLexicon* LXLexiconRef;

typedef struct __NLTokenizer* NLTokenizerRef;

typedef struct _NSZone* NSZoneRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct __CFStringTokenizer* CFStringTokenizerRef;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct NLConstraintParameters {
	BOOL splitSentences;
	unsigned long long minSplitTokens;
	unsigned long long maxSplitTokens;
	unsigned long long maxTokens;
	unsigned long long maxLabels;
	unsigned long long maxVocabularySize;
} NLConstraintParameters;
