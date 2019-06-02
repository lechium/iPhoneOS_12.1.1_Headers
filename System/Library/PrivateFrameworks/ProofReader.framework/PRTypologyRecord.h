/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProofReader/ProofReader-Structs.h>
@class NSString, NSArray, NSValue, NSMutableArray;

@interface PRTypologyRecord : NSObject {

	NSString* _string;
	NSRange _range;
	NSString* _language;
	NSArray* _languages;
	NSString* _appIdentifier;
	NSValue* _selectedRangeValue;
	NSArray* _topLanguages;
	NSArray* _keyEventArray;
	NSMutableArray* _typologyCorrections;
	NSMutableArray* _typologyCandidates;
	NSArray* _results;
	double _openTime;
	double _closeTime;
	BOOL _autocorrect;
	BOOL _initialCapitalize;
	BOOL _autocapitalize;
	BOOL _isOpen;

}
+(id)currentTypologyRecord;
+(id)openTypologyRecordWithString:(id)arg1 range:(NSRange)arg2 language:(id)arg3 languages:(id)arg4 topLanguages:(id)arg5 autocorrect:(BOOL)arg6 initialCapitalize:(BOOL)arg7 autocapitalize:(BOOL)arg8 keyEventArray:(id)arg9 appIdentifier:(id)arg10 selectedRangeValue:(id)arg11 ;
+(void)writeTypologyRecords;
+(void)resetTypologyRecords;
+(void)setTypologyRecordsLimit:(unsigned long long)arg1 ;
-(void)addCorrection:(id)arg1 ;
-(id)initWithString:(id)arg1 range:(NSRange)arg2 language:(id)arg3 languages:(id)arg4 topLanguages:(id)arg5 autocorrect:(BOOL)arg6 initialCapitalize:(BOOL)arg7 autocapitalize:(BOOL)arg8 keyEventArray:(id)arg9 appIdentifier:(id)arg10 selectedRangeValue:(id)arg11 ;
-(void)closeTypologyRecordWithResults:(id)arg1 ;
-(void)addCandidate:(id)arg1 ;
-(void)dealloc;
-(id)dictionaryRepresentation;
@end

