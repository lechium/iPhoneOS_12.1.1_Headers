/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol FBSProcess;
@class NSString;

@interface FBSProcessTerminationRequest : NSObject <NSCopying, BSDescriptionProviding> {

	id<FBSProcess> _process;
	NSString* _label;
	unsigned long long _options;
	long long _reportType;
	long long _exceptionCode;
	NSString* _explanation;

}

@property (nonatomic,copy) NSString * label;                             //@synthesize label=_label - In the implementation block
@property (assign,nonatomic,__weak) id<FBSProcess> process;              //@synthesize process=_process - In the implementation block
@property (assign,nonatomic) unsigned long long options;                 //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) long long reportType;                       //@synthesize reportType=_reportType - In the implementation block
@property (assign,nonatomic) long long exceptionCode;                    //@synthesize exceptionCode=_exceptionCode - In the implementation block
@property (nonatomic,copy) NSString * explanation;                       //@synthesize explanation=_explanation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)requestForProcess:(id)arg1 withLabel:(id)arg2 ;
-(void)setProcess:(id<FBSProcess>)arg1 ;
-(id<FBSProcess>)process;
-(NSString *)explanation;
-(void)setExplanation:(NSString *)arg1 ;
-(void)setReportType:(long long)arg1 ;
-(void)setExceptionCode:(long long)arg1 ;
-(long long)exceptionCode;
-(long long)reportType;
-(void)execute;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)options;
-(NSString *)label;
-(void)setOptions:(unsigned long long)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
@end

