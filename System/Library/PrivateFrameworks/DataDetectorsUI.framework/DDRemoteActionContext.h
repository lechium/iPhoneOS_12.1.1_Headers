/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataDetectorsUI/DataDetectorsUI-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSDictionary, NSArray, NSString;

@interface DDRemoteActionContext : NSObject <NSCoding, NSSecureCoding> {

	NSURL* _URL;
	_DDResult* _result;
	NSDictionary* _context;
	NSArray* _associatedResults;
	NSString* _actionClass;

}

@property (retain) NSURL * URL;                              //@synthesize URL=_URL - In the implementation block
@property (assign) _DDResult* result;                        //@synthesize result=_result - In the implementation block
@property (retain) NSDictionary * context;                   //@synthesize context=_context - In the implementation block
@property (retain) NSArray * associatedResults;              //@synthesize associatedResults=_associatedResults - In the implementation block
@property (retain) NSString * actionClass;                   //@synthesize actionClass=_actionClass - In the implementation block
+(BOOL)isClassAllowedFromString:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(NSArray *)associatedResults;
-(id)initWithURL:(id)arg1 result:(_DDResult*)arg2 context:(id)arg3 associatedResults:(id)arg4 className:(id)arg5 ;
-(void)setActionClass:(NSString *)arg1 ;
-(void)setAssociatedResults:(NSArray *)arg1 ;
-(NSString *)actionClass;
-(void)setResult:(_DDResult*)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setContext:(NSDictionary *)arg1 ;
-(NSDictionary *)context;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(_DDResult*)result;
@end

