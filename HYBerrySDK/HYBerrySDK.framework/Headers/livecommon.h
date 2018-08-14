//
//  livecommon.h
//  livecommon
//
//  Created by peng yihan on 2018/4/11.
//  Copyright © 2018年 com.yohenpeng.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#define KNotificationAlipayAuthentication @"KNotificationAlipayAuthentication"

@interface HYLiveSdkConfig : NSObject
/**
 游戏直播配置类

 @param gameId 虎牙游戏平台上的游戏品类ID
 @param appId  虎牙游戏应用标示id
 @param appSecretKey 虎牙游戏应用秘钥
 @param appScheme 游戏app的scheme，用于支付宝实名认证完回调,【berry + 虎牙游戏应用标示id】
 @param appUAId 游戏厂商渠道,填写虎牙游戏应用标示id
 @return 配置
 */
+(instancetype)configWithGameId:(uint64_t)gameId
                          appId:(NSString *)appId
                         appKey:(NSString *)appSecretKey
                      appScheme:(NSString *)appScheme
                          appUa:(NSString *)appUAId;

@property(assign,nonatomic)int32_t gameId;

@property(copy,nonatomic)NSString *appId;

@property(copy,nonatomic)NSString *appScheme;

@property(copy,nonatomic)NSString *appUAId;

@property(copy,nonatomic)NSString *appSecretKey;

@end

@interface livecommon : NSObject
+(instancetype)shareLive;

/**
 设置是否测试环境

 @param isTest value
 */
-(void)setupIsDeveloper:(BOOL)isTest;

/**
 初始化直播sdk

 @param config 配置
 */
-(void)setupWithLiveConfig:(HYLiveSdkConfig *)config;

/**
 展示入口

 @param superView sdk相关页面的父视图，可传入keyWindow
 @param needRecommend 是否首页需要推荐列表
 */
-(void)showInView:(UIView *)superView needRecommend:(BOOL)needRecommend;

@end
