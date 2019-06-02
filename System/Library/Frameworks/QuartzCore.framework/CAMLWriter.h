/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuartzCore/QuartzCore-Structs.h>
@class NSURL;

@interface CAMLWriter : NSObject {

	CAMLWriterPriv* _priv;

}

@property (retain) NSURL * baseURL; 
@property (__weak) id<CAMLWriterDelegate> delegate; 
+(id)writerWithData:(id)arg1 ;
-(void)beginPropertyElement:(id)arg1 ;
-(void)setElementAttribute:(id)arg1 forKey:(id)arg2 ;
-(void)setElementContent:(id)arg1 ;
-(id)URLStringForResource:(id)arg1 ;
-(void)beginElement:(unsigned)arg1 ;
-(void)encodeObject:(id)arg1 conditionally:(BOOL)arg2 ;
-(void)_writeElementTree:(CAMLWriterElement*)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
-(void)encodeObject:(id)arg1 ;
-(void)endElement;
-(void)dealloc;
-(void)setDelegate:(id<CAMLWriterDelegate>)arg1 ;
-(id<CAMLWriterDelegate>)delegate;
-(id)initWithData:(id)arg1 ;
-(NSURL *)baseURL;
@end

