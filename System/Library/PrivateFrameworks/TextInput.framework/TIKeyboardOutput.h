/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class TIKeyboardCandidate, NSString, NSIndexSet, NSMutableDictionary;

@interface TIKeyboardOutput : NSObject <NSSecureCoding> {

	BOOL _unmarkIfNecessary;
	BOOL _shouldSendCurrentLocation;
	TIKeyboardCandidate* _acceptedCandidate;
	NSString* _textToCommit;
	unsigned long long _deletionCount;
	NSString* _insertionText;
	unsigned long long _forwardDeletionCount;
	NSString* _insertionTextAfterSelection;
	TIKeyboardCandidate* _shortcutConversion;
	NSIndexSet* _handwritingStrokesToDelete;
	NSMutableDictionary* _customInfo;

}

@property (nonatomic,retain) TIKeyboardCandidate * acceptedCandidate;               //@synthesize acceptedCandidate=_acceptedCandidate - In the implementation block
@property (nonatomic,copy) NSString * textToCommit;                                 //@synthesize textToCommit=_textToCommit - In the implementation block
@property (assign,nonatomic) BOOL unmarkIfNecessary;                                //@synthesize unmarkIfNecessary=_unmarkIfNecessary - In the implementation block
@property (assign,nonatomic) unsigned long long deletionCount;                      //@synthesize deletionCount=_deletionCount - In the implementation block
@property (nonatomic,copy) NSString * insertionText;                                //@synthesize insertionText=_insertionText - In the implementation block
@property (assign,nonatomic) unsigned long long forwardDeletionCount;               //@synthesize forwardDeletionCount=_forwardDeletionCount - In the implementation block
@property (nonatomic,copy) NSString * insertionTextAfterSelection;                  //@synthesize insertionTextAfterSelection=_insertionTextAfterSelection - In the implementation block
@property (nonatomic,retain) TIKeyboardCandidate * shortcutConversion;              //@synthesize shortcutConversion=_shortcutConversion - In the implementation block
@property (nonatomic,copy) NSIndexSet * handwritingStrokesToDelete;                 //@synthesize handwritingStrokesToDelete=_handwritingStrokesToDelete - In the implementation block
@property (assign,nonatomic) BOOL shouldSendCurrentLocation;                        //@synthesize shouldSendCurrentLocation=_shouldSendCurrentLocation - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * customInfo;                      //@synthesize customInfo=_customInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)deleteForward:(unsigned long long)arg1 ;
-(void)deleteForward;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)deleteBackward;
-(void)insertText:(id)arg1 ;
-(TIKeyboardCandidate *)acceptedCandidate;
-(void)setAcceptedCandidate:(TIKeyboardCandidate *)arg1 ;
-(NSString *)textToCommit;
-(void)setTextToCommit:(NSString *)arg1 ;
-(BOOL)unmarkIfNecessary;
-(void)setUnmarkIfNecessary:(BOOL)arg1 ;
-(unsigned long long)deletionCount;
-(void)setDeletionCount:(unsigned long long)arg1 ;
-(NSString *)insertionText;
-(void)setInsertionText:(NSString *)arg1 ;
-(unsigned long long)forwardDeletionCount;
-(void)setForwardDeletionCount:(unsigned long long)arg1 ;
-(NSString *)insertionTextAfterSelection;
-(void)setInsertionTextAfterSelection:(NSString *)arg1 ;
-(TIKeyboardCandidate *)shortcutConversion;
-(void)setShortcutConversion:(TIKeyboardCandidate *)arg1 ;
-(NSIndexSet *)handwritingStrokesToDelete;
-(void)setHandwritingStrokesToDelete:(NSIndexSet *)arg1 ;
-(BOOL)shouldSendCurrentLocation;
-(void)setShouldSendCurrentLocation:(BOOL)arg1 ;
-(NSMutableDictionary *)customInfo;
-(void)setCustomInfo:(NSMutableDictionary *)arg1 ;
-(void)deleteBackward:(unsigned long long)arg1 ;
-(void)insertTextAfterSelection:(id)arg1 ;
@end
