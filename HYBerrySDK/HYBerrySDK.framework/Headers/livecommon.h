//
//  livecommon.h
//  livecommon
//
//  Created by peng yihan on 2018/4/11.
//  Copyright © 2018年 com.yohenpeng.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface HYLiveSdkConfig : NSObject
/**
 游戏直播配置类
 @param gameId 虎牙游戏平台上的游戏品类ID
 @param appId  虎牙游戏应用标示id
 @param appSecretKey 虎牙游戏应用秘钥
 @return 配置
 */
+(instancetype)configWithGameId:(uint64_t)gameId
                          appId:(NSString *)appId
                         appKey:(NSString *)appSecretKey;

@property(assign,nonatomic)int32_t gameId;

@property(copy,nonatomic)NSString *appId;

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


/*
 * 不展示登录页面直接开播
 * superView sdk相关页面的父视图，可传入keyWindow
 * openId    游戏账号唯一标识
 */

-(void)startLive:(UIView *)superView openId:(NSString *)openId;


@end
