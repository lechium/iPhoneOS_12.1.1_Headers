/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/DiagnosticReportGenerator.h>
#import <libobjc.A.dylib/NetDiagnosticsShimDelegate.h>

@class NetDiagnosticsShim, NSMutableDictionary, NSDictionary, NSDate, NSString;

@interface NetworkDiagnosticsReportGenerator : DiagnosticReportGenerator <NetDiagnosticsShimDelegate> {

	NetDiagnosticsShim* _netDiags;
	NSMutableDictionary* _options;
	NSDictionary* _netDiagsResults;
	NSDate* _reportStart;

}

@property (nonatomic,retain) NetDiagnosticsShim * netDiags;               //@synthesize netDiags=_netDiags - In the implementation block
@property (nonatomic,retain) NSDictionary * netDiagsResults;              //@synthesize netDiagsResults=_netDiagsResults - In the implementation block
@property (nonatomic,retain) NSDate * reportStart;                        //@synthesize reportStart=_reportStart - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * options;               //@synthesize options=_options - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NetDiagnosticsShim *)netDiags;
-(void)netDiagnosticTaskStatusChangedFor:(id)arg1 toStatus:(int)arg2 ;
-(void)setNetDiags:(NetDiagnosticsShim *)arg1 ;
-(void)setNetDiagsResults:(NSDictionary *)arg1 ;
-(BOOL)startNetDiagnosticsTaskWithReply:(/*^block*/id)arg1 ;
-(NSDictionary *)netDiagsResults;
-(BOOL)startReportGeneration;
-(id)createDefaultTaskDictionaryWithTaskName:(const char*)arg1 filePath:(id)arg2 ;
-(NSDate *)reportStart;
-(void)setReportStart:(NSDate *)arg1 ;
-(NSMutableDictionary *)options;
-(void)setOptions:(NSMutableDictionary *)arg1 ;
-(id)initWithQueue:(id)arg1 ;
@end

