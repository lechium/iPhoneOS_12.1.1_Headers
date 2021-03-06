/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSDOMXPathResult.h>

@class NSString, IKDOMNode, NSArray;

@interface IKDOMXPathResult : IKJSObject <IKJSDOMXPathResult> {

	long long _type;
	NSArray* _nodes;

}

@property (assign) long long type;                                              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSArray * nodes;                                     //@synthesize nodes=_nodes - In the implementation block
@property (nonatomic,readonly) long long resultType; 
@property (nonatomic,readonly) long long numberValue; 
@property (nonatomic,__weak,readonly) NSString * stringValue; 
@property (nonatomic,readonly) BOOL booleanValue; 
@property (nonatomic,__weak,readonly) IKDOMNode * singleNodeValue; 
@property (nonatomic,readonly) BOOL invalidIteratorState; 
@property (nonatomic,readonly) long long snapshotLength; 
-(long long)resultType;
-(IKDOMNode *)singleNodeValue;
-(BOOL)invalidIteratorState;
-(long long)snapshotLength;
-(id)iterateNext;
-(id)snapshotItem:(long long)arg1 ;
-(id)initWithAppContext:(id)arg1 type:(long long)arg2 nodes:(id)arg3 ;
-(NSArray *)nodes;
-(void)setNodes:(NSArray *)arg1 ;
-(BOOL)booleanValue;
-(long long)numberValue;
-(NSString *)stringValue;
-(long long)type;
-(void)setType:(long long)arg1 ;
@end

