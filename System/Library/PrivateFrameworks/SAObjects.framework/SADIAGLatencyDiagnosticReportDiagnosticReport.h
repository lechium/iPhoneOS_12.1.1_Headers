/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, NSURL, NSString;

@interface SADIAGLatencyDiagnosticReportDiagnosticReport : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSNumber * latency; 
@property (nonatomic,copy) NSURL * uri; 
@property (nonatomic,copy) NSString * verb; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)latencyDiagnosticReportDiagnosticReport;
+(id)latencyDiagnosticReportDiagnosticReportWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSNumber *)latency;
-(void)setLatency:(NSNumber *)arg1 ;
-(void)setVerb:(NSString *)arg1 ;
-(void)setUri:(NSURL *)arg1 ;
-(id)encodedClassName;
-(NSString *)verb;
-(id)groupIdentifier;
-(NSURL *)uri;
@end

