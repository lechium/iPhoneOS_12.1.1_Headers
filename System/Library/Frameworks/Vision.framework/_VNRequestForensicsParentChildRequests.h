/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VNRequest, NSArray;

@interface _VNRequestForensicsParentChildRequests : NSObject {

	VNRequest* _parentRequest;
	NSArray* _orderedChildRequests;

}

@property (nonatomic,readonly) VNRequest * parentRequest;                        //@synthesize parentRequest=_parentRequest - In the implementation block
@property (nonatomic,copy,readonly) NSArray * orderedChildRequests;              //@synthesize orderedChildRequests=_orderedChildRequests - In the implementation block
-(VNRequest *)parentRequest;
-(NSArray *)orderedChildRequests;
-(id)initWithParentRequest:(id)arg1 orderedChildRequests:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

