/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DiagnosticReportGeneratorDelegate.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSMutableArray, DiagnosticCaseStorage, NSUUID, NSMutableDictionary, NSDictionary, NSString;

@interface DiagnosticCase : NSObject <DiagnosticReportGeneratorDelegate, NSCoding> {

	long long reportGeneratorIndex;
	BOOL eventsDirty;
	BOOL payloadsDirty;
	BOOL attachmentsDirty;
	BOOL _allowIPSFileOutput;
	NSMutableArray* _enabledReportGenerators;
	unsigned long long completedDiagnosticActions;
	unsigned long long expectedDiagnosticActions;
	DiagnosticCaseStorage* _temporaryCaseStorage;
	BOOL _readyToEndSession;
	NSUUID* _caseId;
	DiagnosticCaseStorage* _caseStorage;
	NSMutableArray* _caseReports;
	NSMutableArray* _caseOutlets;
	NSMutableDictionary* _signature;
	NSMutableArray* _events;
	NSMutableArray* _payloads;
	NSMutableArray* _attachments;
	NSDictionary* _actions;
	unsigned long long _caseFlags;
	double _preferredDuration;

}

@property (nonatomic,readonly) NSUUID * caseId;                                        //@synthesize caseId=_caseId - In the implementation block
@property (nonatomic,readonly) DiagnosticCaseStorage * caseStorage;                    //@synthesize caseStorage=_caseStorage - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * signature;                        //@synthesize signature=_signature - In the implementation block
@property (nonatomic,readonly) double caseOpenedTime; 
@property (nonatomic,readonly) double caseClosedTime; 
@property (nonatomic,readonly) NSMutableArray * events;                                //@synthesize events=_events - In the implementation block
@property (nonatomic,readonly) NSMutableArray * payloads;                              //@synthesize payloads=_payloads - In the implementation block
@property (nonatomic,readonly) NSMutableArray * attachments;                           //@synthesize attachments=_attachments - In the implementation block
@property (nonatomic,readonly) NSDictionary * actions;                                 //@synthesize actions=_actions - In the implementation block
@property (nonatomic,readonly) NSMutableArray * caseReports;                           //@synthesize caseReports=_caseReports - In the implementation block
@property (nonatomic,readonly) NSMutableArray * caseOutlets;                           //@synthesize caseOutlets=_caseOutlets - In the implementation block
@property (nonatomic,readonly) short caseState; 
@property (nonatomic,readonly) short closureType; 
@property (nonatomic,readonly) short dampeningType; 
@property (getter=isSnapshot,nonatomic,readonly) BOOL snapshot; 
@property (getter=wantsRemote,nonatomic,readonly) BOOL wantsRemote; 
@property (getter=isRemoteTrigger,nonatomic,readonly) BOOL remoteTrigger; 
@property (assign,nonatomic) unsigned long long caseFlags;                             //@synthesize caseFlags=_caseFlags - In the implementation block
@property (assign,nonatomic) double preferredDuration;                                 //@synthesize preferredDuration=_preferredDuration - In the implementation block
@property (nonatomic,readonly) BOOL writeIPSFile; 
@property (assign,nonatomic) BOOL readyToEndSession;                                   //@synthesize readyToEndSession=_readyToEndSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initWithWorkspace:(id)arg1 ;
+(id)diagnosticCaseWithId:(id)arg1 ;
+(id)sanitizedJSONCollectionObject:(id)arg1 ;
+(void)addCaseReportOutlet:(id)arg1 ;
+(void)forceCloseDiagnosticCaseStorage;
+(void)purgeDiagnosticCaseStorage;
+(void)setUpGeneralCaseReportGeneratorsWithQueue:(id)arg1 ;
+(void)removeAllCases;
+(id)activeCases;
+(id)diagnosticCaseWithSignature:(id)arg1 flags:(unsigned long long)arg2 events:(id)arg3 payload:(id)arg4 actions:(id)arg5 inWorkspace:(id)arg6 ;
+(void)saveAllCases;
+(int)addToCaseWithId:(id)arg1 events:(id)arg2 payload:(id)arg3 ;
+(int)addSignatureContentToCaseWithId:(id)arg1 key:(id)arg2 content:(id)arg3 ;
+(BOOL)finalizeDiagnosticCaseWithId:(id)arg1 closureType:(short)arg2 onlyIfReady:(BOOL)arg3 ;
+(int)cancelCaseWithId:(id)arg1 ;
+(BOOL)hasOpenCases;
+(id)casesMatchingDomain:(id)arg1 type:(id)arg2 subtype:(id)arg3 process:(id)arg4 withinLast:(double)arg5 ;
+(unsigned)averageCasesPerDay;
+(id)allDiagnosticCases;
+(void)updateAverageCasesPerDay:(unsigned)arg1 ;
+(id)generateNewCaseId;
+(BOOL)closeCase:(id)arg1 ;
+(id)sanitizedJSONDictionary:(id)arg1 ;
+(id)sanitizedJSONArray:(id)arg1 ;
+(id)_stringRepresentationOfJSONObject:(id)arg1 prettyPrint:(BOOL)arg2 ;
+(id)stringRepresentationOfAttachments:(id)arg1 ;
+(id)attachmentsFromStringRepresentation:(id)arg1 ;
+(BOOL)sendReportsForCase:(id)arg1 ;
+(id)caseStorageAnalytics;
+(void)_saveAllCases;
+(void)removeClosedCasesFromTotalCases;
+(void)deleteAttachmentsForStoredCases:(id)arg1 ;
+(long long)dailyCountLimit;
+(BOOL)disableDampening;
+(long long)dailyCountLimit:(id)arg1 ;
+(BOOL)allowDampeningExceptionFor:(id)arg1 ;
+(BOOL)isAllowedTransientException:(id)arg1 ;
+(BOOL)isAdmissible:(id)arg1 dampenedBy:(short*)arg2 ;
+(void)checkForUIImpactScenarioForCase:(id)arg1 ;
+(void)_updateCaseStatisticsWithCase:(id)arg1 ;
+(void)removeCaseStorageWithID:(id)arg1 ;
+(void)removeTransientCasesWithSignature:(id)arg1 beforeTime:(double)arg2 ;
+(id)casesDiagnosedInTheLast:(double)arg1 from:(double)arg2 matchingDomain:(id)arg3 ;
+(void)setQueue:(id)arg1 ;
-(void)addEvent:(id)arg1 ;
-(NSMutableDictionary *)signature;
-(NSMutableArray *)events;
-(NSMutableArray *)payloads;
-(void)addPayload:(id)arg1 ;
-(void)addEvents:(id)arg1 ;
-(NSUUID *)caseId;
-(double)caseOpenedTime;
-(void)reportGeneratorEnded:(id)arg1 reportInfo:(id)arg2 error:(id)arg3 ;
-(BOOL)isSnapshot;
-(short)dampeningType;
-(void)setDampeningType:(short)arg1 ;
-(short)closureType;
-(id)stringRepresentationOfEvents;
-(double)caseClosedTime;
-(BOOL)writeIPSFile;
-(id)caseDampeningTypeString;
-(id)caseClosureTypeString;
-(DiagnosticCaseStorage *)caseStorage;
-(void)allowIPSFileOutput:(BOOL)arg1 ;
-(void)setPreferredDuration:(double)arg1 ;
-(void)setReadyToEndSession:(BOOL)arg1 ;
-(BOOL)wantsRemote;
-(id)initWithCaseStorage:(id)arg1 ;
-(BOOL)_parseSignatureIntoCaseStorage:(id)arg1 ;
-(void)setCaseState:(short)arg1 ;
-(void)addGroupIdentifierToSignature;
-(BOOL)_parseCaseStorageSignatureInto:(id)arg1 ;
-(void)deserializeDiagnosticCaseStorageEvents;
-(void)deserializeDiagnosticCaseStoragePayloads;
-(void)deserializeDiagnosticCaseStorageAttachments;
-(id)_lookUpDiagnosticCaseStorage;
-(short)caseState;
-(id)caseStateString:(short)arg1 ;
-(id)closureTypeString:(short)arg1 ;
-(id)_generateCaseSummaryDictionary;
-(void)prepareCase;
-(void)finishCase;
-(void)collectLogs;
-(void)noteCaseClosedTime;
-(void)prepareAttachmentsForReporting;
-(void)summarizeCaseReport;
-(BOOL)sendReports;
-(void)noteCaseClosedTime:(double)arg1 ;
-(void)noteCaseOpenedTime:(double)arg1 ;
-(id)_caseDampeningTypeString:(short)arg1 ;
-(void)addEvent:(id)arg1 forced:(BOOL)arg2 ;
-(void)addEvents:(id)arg1 forced:(BOOL)arg2 ;
-(id)eventsFromStringRepresentation;
-(id)stringRepresentationOfPayloads;
-(id)payloadsFromStringRepresentation;
-(BOOL)enabledActionForKey:(id)arg1 ;
-(void)startCollectingDiagnosticExtensions;
-(void)startCollectingAllReports;
-(id)deParametersFromPayloads;
-(void)_addToAttachments:(id)arg1 ;
-(void)finishedCollectingLogs;
-(void)startCollectingNextReport;
-(NSMutableArray *)caseReports;
-(BOOL)isRemoteTrigger;
-(id)_caseSummaryFileName;
-(id)_createTemporaryDiagnosticCaseStorage;
-(void)serializeEventsToDiagnosticCaseStorage;
-(void)serializePayloadsToDiagnosticCaseStorage;
-(void)serializeAttachmentsToDiagnosticCaseStorage;
-(id)initWithSignature:(id)arg1 flags:(unsigned long long)arg2 events:(id)arg3 payload:(id)arg4 actions:(id)arg5 inWorkspace:(id)arg6 ;
-(void)setClosureType:(short)arg1 ;
-(void)_promoteTemporaryCaseStorage;
-(id)initWithCaseId:(id)arg1 ;
-(BOOL)readyToEndSession;
-(double)preferredDuration;
-(void)noteCaseOpenedTime;
-(short)caseStateFromString:(id)arg1 ;
-(id)stringRepresentationOfSignature;
-(BOOL)matchSignature:(id)arg1 ;
-(NSMutableArray *)caseOutlets;
-(unsigned long long)caseFlags;
-(void)setCaseFlags:(unsigned long long)arg1 ;
-(void)dealloc;
-(NSMutableArray *)attachments;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
-(NSDictionary *)actions;
-(id)dictionaryRepresentation;
@end

