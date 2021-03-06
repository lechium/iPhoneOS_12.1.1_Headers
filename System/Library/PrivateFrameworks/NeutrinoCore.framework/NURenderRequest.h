/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NUDevice, OS_dispatch_queue;
@class NSArray, NSString, NUPriority, NSObject, NURenderContext, NUComposition;

@interface NURenderRequest : NSObject <NSCopying> {

	long long _requestNumber;
	long long _copiedFromRequestNumber;
	long long _parentRequestNumber;
	BOOL _shouldCoalesceUpdates;
	long long _sampleMode;
	NSArray* _pipelineFilters;
	id<NUDevice> _device;
	NSString* _name;
	NUPriority* _priority;
	NSObject*<OS_dispatch_queue> _responseQueue;
	NURenderContext* _renderContext;
	NUComposition* _internalComposition;
	double _submitTime;
	/*^block*/id _completionBlock;
	id _voucher;

}

@property (copy) NUComposition * internalComposition;                                 //@synthesize internalComposition=_internalComposition - In the implementation block
@property (assign) double submitTime;                                                 //@synthesize submitTime=_submitTime - In the implementation block
@property (copy) id completionBlock;                                                  //@synthesize completionBlock=_completionBlock - In the implementation block
@property (retain) id voucher;                                                        //@synthesize voucher=_voucher - In the implementation block
@property (nonatomic,copy) NUComposition * composition; 
@property (assign,nonatomic) long long sampleMode;                                    //@synthesize sampleMode=_sampleMode - In the implementation block
@property (nonatomic,copy) NSArray * pipelineFilters;                                 //@synthesize pipelineFilters=_pipelineFilters - In the implementation block
@property (nonatomic,retain) id<NUDevice> device;                                     //@synthesize device=_device - In the implementation block
@property (nonatomic,copy) NSString * name;                                           //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NUPriority * priority;                                   //@synthesize priority=_priority - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> responseQueue;              //@synthesize responseQueue=_responseQueue - In the implementation block
@property (nonatomic,retain) NURenderContext * renderContext;                         //@synthesize renderContext=_renderContext - In the implementation block
@property (assign) BOOL shouldCoalesceUpdates;                                        //@synthesize shouldCoalesceUpdates=_shouldCoalesceUpdates - In the implementation block
-(void)setPipelineFilters:(NSArray *)arg1 ;
-(void)setRenderContext:(NURenderContext *)arg1 ;
-(NURenderContext *)renderContext;
-(void)submitGeneric:(/*^block*/id)arg1 ;
-(id)newRenderJob;
-(long long)mediaComponentType;
-(long long)sampleMode;
-(void)setSampleMode:(long long)arg1 ;
-(NSArray *)pipelineFilters;
-(NUComposition *)internalComposition;
-(void)takePropertiesFromRequest:(id)arg1 ;
-(void)setInternalComposition:(NUComposition *)arg1 ;
-(void)setSubmitTime:(double)arg1 ;
-(BOOL)shouldCoalesceUpdates;
-(void)setShouldCoalesceUpdates:(BOOL)arg1 ;
-(double)submitTime;
-(NUComposition *)composition;
-(id)initWithComposition:(id)arg1 ;
-(void)setComposition:(NUComposition *)arg1 ;
-(id<NUDevice>)device;
-(void)setDevice:(id<NUDevice>)arg1 ;
-(void)setResponseQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)voucher;
-(void)setVoucher:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)responseQueue;
-(id)init;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPriority:(NUPriority *)arg1 ;
-(NUPriority *)priority;
-(void)setCompletionBlock:(id)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(id)completionBlock;
@end

