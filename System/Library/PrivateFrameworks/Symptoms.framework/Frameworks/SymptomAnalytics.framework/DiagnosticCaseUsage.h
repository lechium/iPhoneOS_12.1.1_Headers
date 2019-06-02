/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSDate;

@interface DiagnosticCaseUsage : NSManagedObject

@property (nonatomic,retain) NSString * domain; 
@property (nonatomic,retain) NSString * type; 
@property (nonatomic,retain) NSString * subtype; 
@property (nonatomic,retain) NSString * process; 
@property (nonatomic,retain) NSDate * lastSeen; 
@property (nonatomic,retain) NSDate * lastAccepted; 
@property (assign,nonatomic) int casesSeen; 
@property (assign,nonatomic) int casesAccepted; 
@property (assign,nonatomic) double interarrival_mean; 
@property (assign,nonatomic) double interarrival_var; 
@end

