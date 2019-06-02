/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreML/CoreML-Structs.h>
#import <CoreML/MLRegressor.h>
#import <libobjc.A.dylib/MLModelSpecificationLoader.h>

@class NSString;

@interface MLGLMRegression : MLRegressor <MLModelSpecificationLoader> {

	vector<double, std::__1::allocator<double> >* intercept;
	vector<std::__1::vector<double, std::__1::allocator<double> >, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > >* weights;
	int postEvalTransForm;
	shared_ptr<CoreML::Specification::Model>* m_spec;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)loadModelFromSpecification:(MLModelSpecification*)arg1 configuration:(id)arg2 error:(id*)arg3 ;
-(id)regress:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)initWithLRSpec:(MLModelSpecification*)arg1 configuration:(id)arg2 error:(id*)arg3 ;
-(id)initWithSpecification:(MLModelSpecification*)arg1 configuration:(id)arg2 error:(id*)arg3 ;
@end

